#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11610;
unsigned long long int var_1 = 7604249715941488619ULL;
unsigned short var_2 = (unsigned short)2713;
unsigned int var_3 = 676893241U;
unsigned int var_6 = 400940629U;
int var_8 = 763744478;
int zero = 0;
unsigned short var_12 = (unsigned short)48173;
signed char var_13 = (signed char)-125;
unsigned short var_14 = (unsigned short)63908;
unsigned int var_15 = 2599226641U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)63748;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1541552034835405777LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
