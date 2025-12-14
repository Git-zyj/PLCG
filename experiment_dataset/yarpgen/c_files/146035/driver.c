#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -403603513;
short var_2 = (short)13436;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-29;
long long int var_5 = 3932823914414704360LL;
unsigned char var_6 = (unsigned char)85;
_Bool var_7 = (_Bool)1;
int var_8 = 761191032;
long long int var_13 = 1600973081981608678LL;
int zero = 0;
long long int var_14 = 2420111555275011378LL;
unsigned short var_15 = (unsigned short)14854;
signed char var_16 = (signed char)-110;
long long int var_17 = 1264300825199065290LL;
signed char var_18 = (signed char)-82;
signed char var_19 = (signed char)110;
signed char var_20 = (signed char)-87;
int var_21 = 1121551813;
short var_22 = (short)-17249;
unsigned char var_23 = (unsigned char)252;
unsigned short var_24 = (unsigned short)9896;
unsigned short var_25 = (unsigned short)37107;
unsigned long long int var_26 = 3063255291542087891ULL;
long long int arr_0 [23] ;
short arr_2 [23] ;
signed char arr_3 [23] ;
short arr_4 [23] ;
_Bool arr_6 [23] ;
unsigned short arr_7 [23] [23] [23] ;
int arr_8 [23] [23] [23] [23] [23] [23] ;
long long int arr_12 [23] [23] [23] [23] [23] ;
short arr_20 [23] ;
unsigned int arr_23 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -3978368910853569157LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-19116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-16676;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)5044;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1503401963;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3144250686629171678LL : -7168483007724301645LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (short)28692;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = 3548746972U;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
