#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 51884434;
int var_1 = 2073699049;
unsigned short var_2 = (unsigned short)23573;
int var_3 = 411520021;
short var_4 = (short)-15350;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-92;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)103;
signed char var_12 = (signed char)64;
int zero = 0;
unsigned int var_14 = 2433034375U;
_Bool var_15 = (_Bool)0;
long long int var_16 = 6605502623354895891LL;
_Bool var_17 = (_Bool)0;
int arr_1 [12] ;
int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -824390073 : -246658846;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -878142785 : -1547836766;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
