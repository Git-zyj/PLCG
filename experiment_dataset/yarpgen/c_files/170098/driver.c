#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3540801790U;
int var_4 = 494372197;
unsigned int var_5 = 2817401259U;
int var_6 = -869935059;
short var_7 = (short)-16480;
unsigned short var_8 = (unsigned short)15239;
unsigned long long int var_10 = 13289421280933273644ULL;
short var_11 = (short)15291;
unsigned int var_13 = 2585526934U;
short var_14 = (short)10392;
unsigned long long int var_15 = 17253467639560951548ULL;
int zero = 0;
unsigned long long int var_19 = 621941002672575791ULL;
unsigned int var_20 = 4006999848U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)6;
long long int var_23 = -464856492617757204LL;
int arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1489469655 : 1867720524;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
