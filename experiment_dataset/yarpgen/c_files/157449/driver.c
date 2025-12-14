#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1984513805;
long long int var_2 = -5572929679954880951LL;
unsigned int var_3 = 1157627021U;
int var_4 = 1886618809;
signed char var_5 = (signed char)90;
long long int var_6 = -7125247281388304903LL;
unsigned int var_7 = 1143791247U;
unsigned int var_8 = 2808138724U;
int var_9 = 653873920;
long long int var_10 = -3214318977308653720LL;
unsigned char var_11 = (unsigned char)1;
unsigned short var_12 = (unsigned short)19171;
unsigned long long int var_16 = 1889369038889131840ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)55317;
unsigned short var_18 = (unsigned short)40697;
short var_19 = (short)-11610;
short var_20 = (short)6556;
signed char var_21 = (signed char)-108;
unsigned short var_22 = (unsigned short)62827;
unsigned long long int arr_0 [12] [12] ;
short arr_2 [12] ;
signed char arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 4781808182269668774ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)31464;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-119;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
