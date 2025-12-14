#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-19;
unsigned long long int var_1 = 14604881192917658324ULL;
unsigned long long int var_2 = 1045185665548211122ULL;
unsigned long long int var_4 = 8517425921215202586ULL;
signed char var_5 = (signed char)75;
short var_7 = (short)10756;
unsigned int var_8 = 727532801U;
int var_9 = -1259529698;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)251;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = -756675971;
int var_14 = -603301543;
unsigned int var_15 = 1787977839U;
unsigned char var_16 = (unsigned char)187;
short var_17 = (short)-2804;
int var_18 = 1161389976;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5856653137263396542ULL;
unsigned long long int var_21 = 4157355462107054406ULL;
unsigned long long int var_22 = 12106538663138337211ULL;
long long int var_23 = 6769009093669467074LL;
_Bool var_24 = (_Bool)1;
short var_25 = (short)-32697;
_Bool var_26 = (_Bool)1;
signed char arr_18 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)25 : (signed char)28;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
