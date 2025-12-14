#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3589110558914906795ULL;
unsigned char var_2 = (unsigned char)93;
unsigned char var_4 = (unsigned char)130;
unsigned int var_5 = 1877354317U;
int var_6 = -193210545;
unsigned char var_8 = (unsigned char)195;
short var_9 = (short)-15592;
unsigned int var_11 = 695678242U;
unsigned short var_12 = (unsigned short)30215;
unsigned long long int var_13 = 12371688504716823238ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)243;
_Bool var_15 = (_Bool)1;
short var_16 = (short)15544;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-108;
short var_19 = (short)-395;
short var_20 = (short)17833;
long long int var_21 = 4913993744701602111LL;
signed char var_22 = (signed char)-126;
unsigned long long int var_23 = 13579567691115848802ULL;
short arr_0 [21] ;
signed char arr_1 [21] [21] ;
unsigned short arr_2 [14] ;
unsigned char arr_3 [14] [14] ;
unsigned char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)15991;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)7255;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)3;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
