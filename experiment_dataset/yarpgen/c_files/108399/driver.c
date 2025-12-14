#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_6 = (short)9592;
unsigned long long int var_8 = 13077652337372642665ULL;
unsigned long long int var_10 = 7499873187318106952ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 6240408262688383398ULL;
unsigned int var_13 = 1678063134U;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)165;
int var_16 = 1130110915;
short var_17 = (short)-3746;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8867286151916788870LL;
}

void checksum() {
    hash(&seed, var_11);
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
