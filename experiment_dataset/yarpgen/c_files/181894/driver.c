#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)42208;
unsigned int var_9 = 2449796016U;
int zero = 0;
unsigned long long int var_11 = 7492640326022757321ULL;
signed char var_12 = (signed char)-10;
signed char var_13 = (signed char)95;
unsigned int var_14 = 1986264253U;
unsigned int arr_0 [17] [17] ;
unsigned long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1434331485U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 5446821064963804255ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
