#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36431;
signed char var_1 = (signed char)-17;
short var_2 = (short)26836;
unsigned int var_3 = 3737355560U;
unsigned int var_4 = 2592597805U;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)30;
unsigned char var_9 = (unsigned char)1;
int zero = 0;
short var_10 = (short)4295;
short var_11 = (short)3782;
unsigned char var_12 = (unsigned char)61;
short var_13 = (short)9125;
unsigned long long int var_14 = 7912359687333116076ULL;
unsigned char var_15 = (unsigned char)247;
unsigned short var_16 = (unsigned short)64412;
long long int var_17 = 3448086658585820522LL;
signed char var_18 = (signed char)95;
unsigned short var_19 = (unsigned short)28859;
int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 834232585;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
