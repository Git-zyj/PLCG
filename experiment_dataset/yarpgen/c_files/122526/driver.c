#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2650664844U;
unsigned short var_2 = (unsigned short)56036;
unsigned short var_5 = (unsigned short)40810;
signed char var_6 = (signed char)-126;
unsigned short var_7 = (unsigned short)24773;
int var_9 = -410446299;
int zero = 0;
unsigned short var_10 = (unsigned short)26747;
long long int var_11 = -3831719553120112782LL;
unsigned short var_12 = (unsigned short)54872;
long long int var_13 = -6429127468168891610LL;
unsigned char var_14 = (unsigned char)185;
int var_15 = -1240980110;
int var_16 = 367231091;
unsigned int arr_1 [22] ;
unsigned short arr_2 [22] ;
unsigned long long int arr_4 [23] ;
long long int arr_3 [22] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1563965321U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)52380;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 9976298128649846796ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7067368280456126027LL : 7293016932148486822LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)17656;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
