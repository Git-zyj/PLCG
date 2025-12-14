#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9171920089138693271ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)20845;
int var_5 = 2110271953;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)12121;
unsigned int var_10 = 2322506751U;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 397043451617493003LL;
unsigned int var_14 = 2864846244U;
int var_15 = 172886956;
_Bool var_16 = (_Bool)1;
_Bool arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
