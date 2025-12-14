#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3240852843U;
int var_4 = 301868111;
int var_5 = 833308126;
int var_6 = -657448461;
unsigned long long int var_8 = 10668921548091354650ULL;
unsigned int var_10 = 827121090U;
unsigned long long int var_11 = 9012342068334009677ULL;
int zero = 0;
int var_12 = 1371834987;
int var_13 = 712558974;
unsigned int var_14 = 2685220795U;
unsigned long long int var_15 = 13151243514449735156ULL;
unsigned int var_16 = 3780783556U;
unsigned long long int arr_1 [11] ;
unsigned int arr_3 [11] ;
unsigned long long int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 5705776683116826986ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1944531859U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 8295925529416181495ULL : 7862901539968434863ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
