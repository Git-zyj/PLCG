#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -808144602119035201LL;
signed char var_2 = (signed char)-91;
long long int var_3 = 6376704525523027145LL;
long long int var_4 = 1352907368403542255LL;
unsigned long long int var_9 = 3607215540969340520ULL;
int zero = 0;
long long int var_12 = 5866707407175317145LL;
unsigned short var_13 = (unsigned short)38057;
short var_14 = (short)-399;
signed char var_15 = (signed char)49;
int var_16 = -1786812017;
unsigned short var_17 = (unsigned short)40603;
unsigned short var_18 = (unsigned short)27595;
signed char var_19 = (signed char)40;
_Bool var_20 = (_Bool)1;
signed char arr_0 [14] ;
int arr_1 [14] ;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 550020106 : 1518423780;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
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
