#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26780;
long long int var_8 = -5769855742024737534LL;
long long int var_9 = -6505399895951250153LL;
unsigned short var_10 = (unsigned short)34762;
long long int var_11 = -5116440849983799397LL;
int zero = 0;
long long int var_13 = -2661198882944332254LL;
unsigned char var_14 = (unsigned char)12;
unsigned short var_15 = (unsigned short)49997;
int var_16 = -1249795887;
long long int var_17 = -4917139249439302263LL;
unsigned short var_18 = (unsigned short)8330;
long long int var_19 = 5771991460077420280LL;
signed char var_20 = (signed char)118;
long long int arr_0 [13] ;
unsigned long long int arr_3 [13] ;
unsigned short arr_4 [24] ;
int arr_5 [24] ;
long long int arr_6 [24] ;
int arr_7 [24] [24] ;
unsigned char arr_8 [24] ;
long long int arr_9 [24] [24] ;
long long int arr_10 [24] [24] ;
int arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -6653668433284480851LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 6038612879068912570ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)8615;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 2133644182;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -5211482930692073213LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 582028848;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 8116655913346230399LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = -2785942212690380439LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 913018445;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
