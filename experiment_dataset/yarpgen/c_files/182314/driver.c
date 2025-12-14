#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 484452979;
unsigned long long int var_7 = 2878727586078895860ULL;
signed char var_8 = (signed char)-108;
long long int var_10 = -163206926567841433LL;
short var_12 = (short)-8155;
int zero = 0;
long long int var_13 = -3927221288488735867LL;
long long int var_14 = -6665984785493256356LL;
unsigned short var_15 = (unsigned short)45529;
long long int var_16 = -4275974551324043280LL;
short var_17 = (short)-24811;
signed char var_18 = (signed char)-112;
signed char var_19 = (signed char)72;
unsigned long long int arr_0 [22] ;
unsigned long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 8421920259408978345ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 10910081898625939423ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
