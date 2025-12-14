#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)238;
int var_3 = -1856912134;
unsigned int var_7 = 3092957120U;
unsigned int var_8 = 1185573948U;
int var_9 = 714625313;
unsigned int var_10 = 749246510U;
int var_14 = -1695073156;
int var_16 = -17760452;
unsigned long long int var_17 = 5755048536500160933ULL;
unsigned int var_18 = 4078596211U;
int zero = 0;
unsigned int var_19 = 2621747147U;
int var_20 = -1901005748;
unsigned long long int var_21 = 2472030693695365960ULL;
unsigned char var_22 = (unsigned char)128;
unsigned long long int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 4731982672378111158ULL;
}

void checksum() {
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
