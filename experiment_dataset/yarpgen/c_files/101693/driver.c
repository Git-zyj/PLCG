#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)87;
unsigned char var_4 = (unsigned char)130;
long long int var_5 = -4859625508112257493LL;
unsigned int var_6 = 345637171U;
short var_10 = (short)22089;
short var_11 = (short)-11810;
long long int var_13 = -2279692888031831470LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)139;
unsigned char var_18 = (unsigned char)46;
long long int var_19 = 9047278808746215507LL;
signed char var_20 = (signed char)102;
unsigned int var_21 = 558835581U;
unsigned short var_22 = (unsigned short)60977;
unsigned int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1179914947U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
