#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
short var_2 = (short)12234;
short var_4 = (short)14741;
unsigned long long int var_5 = 11442865312849333329ULL;
signed char var_6 = (signed char)-5;
short var_7 = (short)-20583;
unsigned long long int var_9 = 2090238757820079264ULL;
unsigned long long int var_12 = 11236705314753802761ULL;
unsigned long long int var_13 = 6621195891492254450ULL;
int zero = 0;
signed char var_14 = (signed char)60;
short var_15 = (short)-22240;
signed char var_16 = (signed char)-127;
unsigned long long int var_17 = 896341512728243399ULL;
unsigned long long int var_18 = 16081890541741958877ULL;
short var_19 = (short)3490;
unsigned long long int var_20 = 12018071753584117848ULL;
short var_21 = (short)2915;
unsigned long long int var_22 = 10099154824446891119ULL;
unsigned long long int var_23 = 18443006931855767034ULL;
signed char var_24 = (signed char)-107;
short var_25 = (short)-13285;
signed char arr_0 [13] ;
short arr_4 [13] ;
signed char arr_6 [13] [13] [13] ;
signed char arr_12 [19] [19] ;
signed char arr_13 [19] [19] ;
signed char arr_16 [14] ;
signed char arr_7 [13] [13] [13] [13] ;
unsigned long long int arr_11 [12] [12] ;
signed char arr_14 [19] [19] ;
short arr_17 [14] [14] ;
unsigned long long int arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)11975;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = 2436894531766799293ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-8685;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 4304144630989965607ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
