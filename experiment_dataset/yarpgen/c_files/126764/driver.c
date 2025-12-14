#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -738480984183009731LL;
long long int var_1 = 2739767655817557052LL;
short var_2 = (short)-24270;
short var_3 = (short)-22304;
long long int var_4 = -5395401112412325309LL;
unsigned long long int var_6 = 10025683398910080687ULL;
short var_7 = (short)8598;
long long int var_8 = 8392219914156602378LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 15400722030365583746ULL;
long long int var_11 = 3923262560737658119LL;
long long int var_12 = -5978963978330284910LL;
int var_13 = 15771346;
int zero = 0;
short var_16 = (short)32451;
unsigned long long int var_17 = 15250686535261606924ULL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-1729;
long long int arr_0 [14] ;
short arr_1 [14] ;
short arr_2 [14] ;
unsigned long long int arr_3 [14] [14] ;
unsigned int arr_11 [15] [15] ;
signed char arr_12 [15] ;
int arr_4 [14] ;
long long int arr_5 [14] ;
short arr_6 [14] ;
long long int arr_7 [14] [14] ;
_Bool arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -1148453336841322911LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-18106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-23518;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 12739111704524477106ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = 1144066170U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -1500949396;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -6828723823880047388LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)-16069;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 1418255388166277064LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
