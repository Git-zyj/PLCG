#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)99;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 3708731469014439590ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-69;
signed char var_16 = (signed char)38;
signed char var_17 = (signed char)8;
unsigned long long int var_18 = 12808211808856256612ULL;
unsigned short var_19 = (unsigned short)51087;
signed char arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)100;
}

void checksum() {
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
