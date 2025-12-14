#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32238;
unsigned short var_5 = (unsigned short)47157;
unsigned int var_7 = 2188939360U;
unsigned short var_10 = (unsigned short)33653;
unsigned int var_14 = 689468119U;
int zero = 0;
unsigned long long int var_17 = 12086568749651791343ULL;
unsigned long long int var_18 = 13737315122827171471ULL;
_Bool var_19 = (_Bool)1;
int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 1550536617;
}

void checksum() {
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
