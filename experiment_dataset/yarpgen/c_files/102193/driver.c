#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4269341266478932755LL;
long long int var_3 = -8592888126369420790LL;
unsigned int var_4 = 2679121470U;
unsigned short var_5 = (unsigned short)12088;
unsigned int var_7 = 4095058920U;
unsigned int var_12 = 4270205465U;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)63405;
unsigned long long int var_16 = 5354300182162210845ULL;
unsigned short var_17 = (unsigned short)16251;
unsigned char var_18 = (unsigned char)48;
unsigned short var_19 = (unsigned short)31694;
unsigned short var_20 = (unsigned short)61457;
unsigned long long int arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
unsigned char arr_4 [14] [14] [14] ;
unsigned long long int arr_5 [14] ;
long long int arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 998425370006538473ULL : 375952269370676474ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 12979806440662833338ULL : 4401239582179598239ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)243 : (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1579851947328914023ULL : 12701233446164779291ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 5932538261080078741LL : -2410860513168791909LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
