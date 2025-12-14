#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1028026290U;
unsigned short var_1 = (unsigned short)22052;
unsigned char var_2 = (unsigned char)147;
unsigned short var_5 = (unsigned short)39236;
unsigned long long int var_8 = 15319882627805211165ULL;
int zero = 0;
unsigned int var_12 = 116272500U;
unsigned char var_13 = (unsigned char)1;
signed char var_14 = (signed char)10;
_Bool var_15 = (_Bool)1;
int arr_2 [17] ;
unsigned int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -897468664;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1971962787U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
