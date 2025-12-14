#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19935;
unsigned long long int var_3 = 1176674101694052280ULL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-106;
unsigned int var_9 = 3917560366U;
short var_11 = (short)-16455;
unsigned int var_12 = 3519302070U;
short var_13 = (short)-23279;
short var_16 = (short)4987;
unsigned long long int var_17 = 1230912283620008605ULL;
int zero = 0;
unsigned long long int var_19 = 10425257110935881003ULL;
unsigned long long int var_20 = 4471573020713113410ULL;
unsigned int var_21 = 2291159574U;
unsigned long long int var_22 = 3500576365553767461ULL;
unsigned short var_23 = (unsigned short)31507;
signed char var_24 = (signed char)67;
unsigned short var_25 = (unsigned short)44596;
_Bool var_26 = (_Bool)1;
int arr_0 [14] ;
signed char arr_2 [14] ;
int arr_3 [14] [14] [14] ;
short arr_4 [14] [14] [14] ;
short arr_7 [14] [14] [14] [14] ;
unsigned long long int arr_9 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 76918733;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 366062848;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)19172;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-14753;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2018496424438268916ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
