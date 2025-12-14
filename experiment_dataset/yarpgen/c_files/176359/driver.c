#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1309210489810317447LL;
long long int var_3 = -5457525875563307738LL;
short var_4 = (short)11365;
signed char var_5 = (signed char)-4;
unsigned char var_8 = (unsigned char)147;
signed char var_12 = (signed char)74;
long long int var_13 = -200304935251424951LL;
signed char var_14 = (signed char)75;
unsigned short var_17 = (unsigned short)44105;
short var_19 = (short)-19016;
int zero = 0;
short var_20 = (short)-23762;
int var_21 = 234763398;
signed char var_22 = (signed char)-83;
long long int var_23 = -7646923806561484011LL;
int var_24 = -655145874;
short var_25 = (short)-17311;
long long int var_26 = 401493752419626672LL;
short var_27 = (short)-2991;
long long int arr_4 [15] ;
signed char arr_5 [15] [15] ;
unsigned char arr_6 [15] [15] [15] ;
int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -8137732485876688588LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1195113626;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
