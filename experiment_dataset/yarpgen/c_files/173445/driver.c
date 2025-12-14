#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16732;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)216;
unsigned char var_9 = (unsigned char)48;
int zero = 0;
long long int var_12 = 2493068853042536191LL;
unsigned int var_13 = 613975481U;
unsigned char arr_1 [23] ;
_Bool arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
