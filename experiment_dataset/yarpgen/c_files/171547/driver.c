#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1921873873U;
short var_2 = (short)21091;
unsigned long long int var_3 = 652773117992232251ULL;
unsigned long long int var_5 = 12658658648157767343ULL;
short var_6 = (short)-30157;
unsigned long long int var_7 = 12633442769739725698ULL;
unsigned int var_11 = 3387639313U;
unsigned short var_12 = (unsigned short)53293;
int zero = 0;
short var_13 = (short)-25139;
short var_14 = (short)10438;
unsigned short var_15 = (unsigned short)6706;
unsigned short var_16 = (unsigned short)14060;
unsigned long long int var_17 = 6977345662547063105ULL;
unsigned short var_18 = (unsigned short)15644;
short var_19 = (short)23723;
unsigned long long int var_20 = 5179278498199311954ULL;
unsigned short arr_1 [25] [25] ;
unsigned long long int arr_3 [25] [25] ;
unsigned short arr_8 [23] [23] [23] ;
unsigned int arr_10 [23] [23] [23] ;
short arr_14 [23] ;
unsigned short arr_12 [23] ;
short arr_15 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)37574 : (unsigned short)46320;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 588672942571302759ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)58875;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1843392841U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (short)-15633;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)29800;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)10488;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
