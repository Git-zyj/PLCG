#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1239682627;
unsigned long long int var_5 = 1751926602675148952ULL;
int var_7 = 395280748;
unsigned int var_9 = 549745855U;
int zero = 0;
int var_13 = 1282825671;
unsigned short var_14 = (unsigned short)19108;
_Bool var_15 = (_Bool)0;
short arr_0 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-17415 : (short)32634;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
