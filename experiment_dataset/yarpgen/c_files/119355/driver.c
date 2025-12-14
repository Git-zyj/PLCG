#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_6 = 1843026570U;
unsigned char var_7 = (unsigned char)23;
long long int var_8 = 6461937062615296375LL;
_Bool var_10 = (_Bool)1;
int var_12 = -877387108;
long long int var_13 = -4440008457106253725LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 1808756688;
short var_17 = (short)-11672;
long long int var_18 = 6593648575552207958LL;
unsigned char var_19 = (unsigned char)30;
signed char var_20 = (signed char)60;
unsigned char var_21 = (unsigned char)42;
short arr_0 [18] ;
int arr_1 [18] [18] ;
_Bool arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-1472;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 836259172;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
