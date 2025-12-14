#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6616053584913944192LL;
unsigned short var_1 = (unsigned short)33653;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-110;
signed char var_4 = (signed char)-45;
signed char var_5 = (signed char)87;
unsigned short var_7 = (unsigned short)39039;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)22;
signed char var_10 = (signed char)-126;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-120;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-90;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)79;
int var_19 = -687714550;
signed char var_20 = (signed char)-105;
signed char var_21 = (signed char)-61;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
int var_25 = -1520664436;
signed char var_26 = (signed char)-12;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)152;
int var_29 = -1815939309;
unsigned short var_30 = (unsigned short)41006;
signed char arr_10 [12] [12] ;
int arr_21 [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-84 : (signed char)61;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -1713463037 : -1782426389;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
