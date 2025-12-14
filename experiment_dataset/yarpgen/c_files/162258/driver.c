#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 662066369;
unsigned short var_2 = (unsigned short)13577;
long long int var_3 = 3635114644417265872LL;
long long int var_4 = -2228291102044315900LL;
signed char var_5 = (signed char)96;
int var_9 = 255978983;
unsigned long long int var_10 = 592934502112720506ULL;
int zero = 0;
unsigned long long int var_11 = 1677921377498885741ULL;
long long int var_12 = 3350840707410587674LL;
unsigned char var_13 = (unsigned char)25;
unsigned char var_14 = (unsigned char)19;
long long int var_15 = 35497893387221547LL;
long long int var_16 = -9194164070414429512LL;
unsigned short var_17 = (unsigned short)11265;
int var_18 = -124609850;
unsigned long long int var_19 = 11011725699235586683ULL;
long long int var_20 = 6504519164060706024LL;
int var_21 = 1194988540;
unsigned long long int var_22 = 5953697305403509915ULL;
long long int var_23 = -7619854953053346432LL;
short var_24 = (short)29514;
signed char var_25 = (signed char)94;
unsigned short var_26 = (unsigned short)702;
long long int var_27 = -9107118581787345556LL;
long long int arr_6 [12] ;
short arr_16 [21] ;
short arr_17 [21] ;
_Bool arr_18 [21] ;
short arr_19 [21] ;
unsigned char arr_20 [21] [21] ;
short arr_22 [21] [21] ;
_Bool arr_23 [21] ;
unsigned char arr_25 [21] ;
_Bool arr_26 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 3164104351332498275LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (short)15220;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (short)-31673;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)-22978 : (short)-2556;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)186 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_22 [i_0] [i_1] = (short)-19353;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
