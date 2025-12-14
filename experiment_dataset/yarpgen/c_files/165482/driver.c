#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2640994252405394920LL;
short var_4 = (short)-2401;
unsigned char var_5 = (unsigned char)75;
int var_8 = 675653021;
unsigned short var_13 = (unsigned short)33019;
short var_14 = (short)5870;
unsigned char var_15 = (unsigned char)51;
int zero = 0;
short var_16 = (short)-9073;
unsigned char var_17 = (unsigned char)101;
unsigned char var_18 = (unsigned char)54;
short var_19 = (short)-11736;
long long int var_20 = -8621353451405295476LL;
long long int arr_0 [13] [13] ;
signed char arr_1 [13] ;
short arr_2 [13] ;
unsigned long long int arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 8615731283350012157LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)19231;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2430873329428315986ULL : 16148926168197339645ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
