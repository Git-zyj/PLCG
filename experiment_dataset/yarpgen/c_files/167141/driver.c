#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16114869879893965582ULL;
int var_2 = 931132227;
unsigned long long int var_3 = 11719223625011986960ULL;
int var_4 = -1251751832;
short var_5 = (short)-14400;
int var_6 = -1735453258;
short var_8 = (short)-11316;
int zero = 0;
signed char var_10 = (signed char)-110;
unsigned int var_11 = 3822348340U;
unsigned long long int var_12 = 8595093555674347950ULL;
unsigned int var_13 = 544888550U;
unsigned long long int var_14 = 955508534162864918ULL;
int var_15 = 1458963996;
int var_16 = 537682401;
unsigned int var_17 = 984037119U;
unsigned long long int var_18 = 10589789493239219098ULL;
unsigned short var_19 = (unsigned short)35898;
signed char var_20 = (signed char)113;
long long int var_21 = 9058732811534020975LL;
unsigned char var_22 = (unsigned char)255;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 8428038095783175069ULL;
unsigned short var_25 = (unsigned short)61567;
unsigned short arr_0 [21] ;
long long int arr_1 [21] ;
short arr_3 [21] [21] [21] ;
short arr_4 [21] ;
unsigned long long int arr_8 [21] [21] [21] [21] [21] ;
signed char arr_10 [21] [21] [21] [21] ;
_Bool arr_13 [21] ;
signed char arr_16 [21] [21] [21] [21] [21] ;
unsigned int arr_17 [21] [21] ;
unsigned short arr_18 [21] [21] [21] ;
unsigned long long int arr_28 [22] ;
_Bool arr_29 [22] [22] ;
_Bool arr_30 [22] ;
short arr_2 [21] [21] ;
signed char arr_14 [21] [21] ;
unsigned int arr_15 [21] [21] [21] [21] ;
unsigned short arr_22 [21] [21] [21] [21] ;
short arr_23 [21] ;
unsigned int arr_27 [21] ;
signed char arr_31 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)3803;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2110857370499597240LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-31084;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)27337 : (short)5651;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 17709694652894056930ULL : 16094444741728688915ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-81 : (signed char)-50;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 813235611U : 2650812754U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)33101;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = 10902832111034341309ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-29957;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-66 : (signed char)-58;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3792054642U : 2786382743U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34326;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (short)-32683;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = 316925603U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (signed char)-51;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
