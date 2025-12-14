#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12833;
signed char var_3 = (signed char)-101;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1904992556U;
_Bool var_10 = (_Bool)1;
short var_13 = (short)3118;
int zero = 0;
short var_14 = (short)23605;
short var_15 = (short)-12759;
int var_16 = 1368145690;
short var_17 = (short)3125;
signed char var_18 = (signed char)-57;
_Bool var_19 = (_Bool)0;
unsigned long long int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 2388356289091257488ULL;
}

void checksum() {
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
