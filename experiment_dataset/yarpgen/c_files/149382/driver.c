#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-17;
unsigned char var_4 = (unsigned char)241;
short var_5 = (short)6581;
unsigned char var_7 = (unsigned char)31;
short var_11 = (short)17298;
unsigned char var_12 = (unsigned char)167;
signed char var_13 = (signed char)68;
int var_14 = -516227735;
unsigned char var_15 = (unsigned char)83;
int var_16 = -1077600304;
short var_17 = (short)9059;
int var_18 = -2123623865;
signed char var_19 = (signed char)-19;
int zero = 0;
short var_20 = (short)-23757;
unsigned char var_21 = (unsigned char)136;
signed char var_22 = (signed char)54;
unsigned char var_23 = (unsigned char)205;
int var_24 = -1529103209;
unsigned char var_25 = (unsigned char)252;
long long int var_26 = 5230157057371392472LL;
short var_27 = (short)-32310;
signed char var_28 = (signed char)59;
unsigned char var_29 = (unsigned char)146;
unsigned int var_30 = 3502746897U;
unsigned int var_31 = 2827303748U;
unsigned char var_32 = (unsigned char)225;
int var_33 = 1573511503;
unsigned long long int arr_15 [14] [14] ;
int arr_16 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = 3348341496269069816ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = -1971185615;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
