#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
unsigned char var_1 = (unsigned char)230;
long long int var_4 = -7965428974136883668LL;
unsigned long long int var_5 = 14866164834081135018ULL;
int var_6 = 2035139951;
long long int var_8 = 2259743727549454197LL;
unsigned char var_9 = (unsigned char)153;
unsigned long long int var_10 = 11344914182938955875ULL;
unsigned long long int var_11 = 8054919756587105294ULL;
long long int var_14 = 4726743395109130568LL;
int zero = 0;
unsigned short var_16 = (unsigned short)34455;
unsigned char var_17 = (unsigned char)106;
unsigned long long int var_18 = 7341384085586953376ULL;
unsigned int var_19 = 1230103184U;
unsigned long long int var_20 = 9831696696785955432ULL;
unsigned int var_21 = 378901455U;
int var_22 = -346831876;
signed char arr_4 [14] ;
int arr_5 [14] [14] ;
int arr_6 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 880735552;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1353427863 : -682601987;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
