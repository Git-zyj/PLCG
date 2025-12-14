#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23843;
short var_1 = (short)-25656;
unsigned long long int var_2 = 1964725012751561287ULL;
signed char var_3 = (signed char)29;
unsigned int var_4 = 789127968U;
signed char var_5 = (signed char)-77;
short var_6 = (short)-7191;
short var_10 = (short)16966;
_Bool var_13 = (_Bool)0;
int var_16 = 1169948330;
long long int var_17 = 4668988184687573255LL;
short var_18 = (short)15885;
int zero = 0;
int var_20 = 660006480;
long long int var_21 = 3986182817462434040LL;
unsigned char var_22 = (unsigned char)128;
short var_23 = (short)-18196;
unsigned char var_24 = (unsigned char)44;
signed char var_25 = (signed char)17;
signed char var_26 = (signed char)-85;
short arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
short arr_4 [13] ;
unsigned long long int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31740;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3156451929U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)25729;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 7018240433573329882ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
