#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
unsigned int var_4 = 1353707629U;
unsigned char var_6 = (unsigned char)128;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)20951;
int var_13 = -1126875262;
signed char var_14 = (signed char)-41;
unsigned char var_15 = (unsigned char)252;
int var_16 = 1987787974;
int var_17 = 2018962477;
int var_18 = -1315889680;
short var_19 = (short)-2764;
signed char var_20 = (signed char)92;
unsigned long long int arr_6 [23] ;
unsigned short arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 11464955695814755985ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (unsigned short)21689;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
