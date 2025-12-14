#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
long long int var_1 = 7652503983018755609LL;
long long int var_2 = 7550510442254357475LL;
unsigned short var_4 = (unsigned short)21048;
long long int var_5 = -1196065960434408854LL;
unsigned short var_7 = (unsigned short)51032;
short var_8 = (short)-26787;
signed char var_10 = (signed char)-91;
short var_11 = (short)-32139;
unsigned long long int var_12 = 6647313962484638470ULL;
unsigned long long int var_13 = 2364650076802386326ULL;
int zero = 0;
long long int var_14 = 4416668105319965585LL;
unsigned int var_15 = 3691463523U;
unsigned long long int var_16 = 3210495386898868315ULL;
short var_17 = (short)670;
unsigned short var_18 = (unsigned short)9457;
signed char var_19 = (signed char)55;
unsigned short var_20 = (unsigned short)8983;
int arr_3 [12] [12] ;
short arr_4 [12] ;
_Bool arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 1468178715;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)-17940;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
