#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
short var_2 = (short)30342;
unsigned char var_3 = (unsigned char)132;
unsigned int var_4 = 2984939421U;
short var_6 = (short)28667;
unsigned long long int var_7 = 6263862389790950555ULL;
short var_10 = (short)1404;
unsigned int var_12 = 1842245710U;
unsigned short var_14 = (unsigned short)40231;
unsigned int var_15 = 1114987418U;
unsigned int var_16 = 20104327U;
long long int var_17 = 3089032239488012736LL;
int zero = 0;
short var_19 = (short)10706;
short var_20 = (short)-31238;
signed char var_21 = (signed char)-50;
unsigned char var_22 = (unsigned char)221;
int var_23 = 610838174;
int var_24 = 1140984910;
long long int var_25 = -1310116310581731213LL;
unsigned long long int var_26 = 6597529626438969820ULL;
long long int var_27 = -2538813167857079326LL;
unsigned long long int arr_11 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8467864695767938746ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
