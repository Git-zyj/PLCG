#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16908083199842825933ULL;
unsigned int var_1 = 3390429829U;
short var_2 = (short)5722;
unsigned long long int var_3 = 15142371046142926265ULL;
unsigned long long int var_4 = 9576030521140148656ULL;
unsigned long long int var_5 = 908314990568565848ULL;
unsigned int var_6 = 2550225629U;
short var_7 = (short)-25824;
unsigned int var_8 = 3015440832U;
unsigned long long int var_9 = 3544390037426616325ULL;
unsigned int var_10 = 460553796U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)90;
short var_13 = (short)-12027;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -84830586;
unsigned char var_16 = (unsigned char)201;
short var_17 = (short)10655;
unsigned short arr_8 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)24543 : (unsigned short)12761;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
