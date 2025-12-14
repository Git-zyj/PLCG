#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25135;
unsigned char var_3 = (unsigned char)88;
unsigned short var_4 = (unsigned short)52531;
long long int var_7 = -3226835800664709057LL;
int var_9 = 1992558078;
unsigned short var_11 = (unsigned short)43329;
long long int var_13 = -3886682428918492600LL;
unsigned short var_14 = (unsigned short)43380;
int zero = 0;
unsigned char var_15 = (unsigned char)226;
unsigned short var_16 = (unsigned short)2034;
unsigned char var_17 = (unsigned char)212;
short var_18 = (short)-31478;
short var_19 = (short)-9714;
long long int var_20 = 7173138621543598154LL;
unsigned short arr_1 [20] ;
long long int arr_5 [20] [20] [20] ;
int arr_6 [20] [20] [20] [20] ;
int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)58530;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -8606360156209397123LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -824414610;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 233314986;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
