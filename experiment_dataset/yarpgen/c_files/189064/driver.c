#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8434401112504075697ULL;
unsigned int var_6 = 1467917344U;
long long int var_8 = -6097797665402845770LL;
_Bool var_16 = (_Bool)0;
long long int var_18 = -3387355004451771632LL;
int zero = 0;
long long int var_20 = 3084612106993918523LL;
long long int var_21 = 7025925855672133415LL;
signed char var_22 = (signed char)104;
unsigned short var_23 = (unsigned short)13816;
unsigned long long int var_24 = 9772353511959263626ULL;
long long int var_25 = -5087170574163498722LL;
unsigned long long int arr_0 [21] ;
signed char arr_1 [21] ;
long long int arr_2 [21] ;
unsigned long long int arr_5 [21] [21] ;
unsigned long long int arr_9 [21] [21] ;
int arr_12 [21] [21] [21] ;
unsigned char arr_13 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 6774626771932393480ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -9105801343705355725LL : -544581355547851857LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 11851029737468777794ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 18175574737272080953ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -435246186;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned char)85;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
