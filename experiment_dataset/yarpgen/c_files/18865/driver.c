#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11179354917354561772ULL;
unsigned short var_2 = (unsigned short)64778;
unsigned char var_6 = (unsigned char)172;
unsigned short var_9 = (unsigned short)1802;
int var_10 = -141545959;
unsigned short var_11 = (unsigned short)25207;
unsigned short var_14 = (unsigned short)44265;
int zero = 0;
unsigned int var_15 = 2790659395U;
unsigned long long int var_16 = 11234186876764599226ULL;
signed char var_17 = (signed char)44;
signed char var_18 = (signed char)-77;
short var_19 = (short)12756;
short var_20 = (short)-25486;
unsigned long long int arr_0 [18] ;
int arr_4 [18] ;
short arr_5 [18] [18] [18] ;
unsigned long long int arr_7 [18] [18] [18] [18] ;
unsigned long long int arr_2 [18] ;
short arr_9 [18] ;
unsigned short arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 18031003246698877774ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1605676904;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)24324;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 12190589707789206688ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 17314310241748524690ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (short)21037;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)40372;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
