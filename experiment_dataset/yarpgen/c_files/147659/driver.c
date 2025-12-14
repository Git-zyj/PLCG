#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 444230764U;
signed char var_7 = (signed char)18;
unsigned char var_8 = (unsigned char)115;
signed char var_9 = (signed char)61;
unsigned char var_10 = (unsigned char)217;
short var_12 = (short)-7478;
int zero = 0;
unsigned char var_13 = (unsigned char)24;
int var_14 = 2113915361;
long long int var_15 = -5638894629145097339LL;
short var_16 = (short)-7099;
short var_17 = (short)-21897;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)63;
long long int arr_0 [11] ;
short arr_1 [11] ;
unsigned int arr_2 [11] [11] [11] ;
unsigned long long int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -5338469694296845362LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-32330;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2695821686U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 7745921867018906150ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
