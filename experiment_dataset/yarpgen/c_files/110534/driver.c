#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3188810905U;
unsigned int var_4 = 2373144923U;
unsigned short var_5 = (unsigned short)19194;
long long int var_6 = -3108929244969086022LL;
unsigned short var_7 = (unsigned short)48392;
short var_8 = (short)16262;
unsigned int var_9 = 2669272863U;
unsigned int var_10 = 2064230247U;
int var_11 = -479835426;
signed char var_12 = (signed char)20;
unsigned int var_13 = 3881629452U;
unsigned short var_14 = (unsigned short)1560;
int zero = 0;
unsigned int var_15 = 2155098805U;
long long int var_16 = -7525686463962984944LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 15544636451589181071ULL;
int var_19 = -1030426697;
unsigned long long int var_20 = 3711905732819370417ULL;
long long int var_21 = 6592409511599192828LL;
unsigned char var_22 = (unsigned char)245;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)20204;
unsigned int var_25 = 1884682967U;
long long int var_26 = -698551662328414505LL;
unsigned short var_27 = (unsigned short)26940;
unsigned long long int arr_7 [22] ;
unsigned short arr_8 [22] ;
unsigned short arr_16 [22] [22] [22] ;
unsigned long long int arr_17 [22] [22] [22] [22] ;
unsigned int arr_23 [22] ;
signed char arr_26 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 13703414958624036291ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)17086;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)41981 : (unsigned short)58300;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 634814248520265614ULL : 1019716426563385606ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = 1829822222U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (signed char)-74;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
