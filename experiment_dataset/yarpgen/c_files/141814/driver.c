#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)49;
long long int var_2 = 2038278934381652408LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)24309;
signed char var_9 = (signed char)94;
signed char var_14 = (signed char)-83;
int zero = 0;
unsigned int var_16 = 1554730346U;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-118;
long long int var_19 = -7407823632503456669LL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)39075;
long long int var_22 = 7260363673745888736LL;
unsigned short var_23 = (unsigned short)20486;
short var_24 = (short)-1920;
long long int arr_13 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3795419612617564600LL : -5867265912599939144LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
