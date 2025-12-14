#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)12077;
_Bool var_3 = (_Bool)0;
short var_4 = (short)16551;
short var_8 = (short)22081;
unsigned int var_10 = 1587366422U;
long long int var_12 = -22520369945965608LL;
unsigned long long int var_14 = 2271302268521129887ULL;
int zero = 0;
long long int var_16 = -2313043985222763379LL;
signed char var_17 = (signed char)-38;
unsigned int var_18 = 2358238573U;
long long int var_19 = -6586964418268033736LL;
short var_20 = (short)23074;
short arr_1 [22] ;
unsigned short arr_3 [22] ;
long long int arr_4 [22] [22] ;
unsigned long long int arr_5 [22] [22] [22] ;
long long int arr_6 [16] ;
short arr_11 [16] ;
long long int arr_12 [16] ;
unsigned long long int arr_13 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-31252;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37986 : (unsigned short)14809;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -2597611321603468772LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 16401780098149822106ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -4365926471648194141LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)-5986;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 6874627043724410412LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 17195682776482769058ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
