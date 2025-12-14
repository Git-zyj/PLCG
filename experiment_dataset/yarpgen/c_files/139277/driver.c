#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13761;
unsigned long long int var_2 = 5137552566884584881ULL;
int var_4 = -381193250;
unsigned long long int var_6 = 770099180284957106ULL;
unsigned int var_7 = 2640515843U;
unsigned long long int var_10 = 2148079434822376032ULL;
long long int var_14 = -1768357318620070019LL;
unsigned int var_15 = 1384392823U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-3911;
signed char var_18 = (signed char)-108;
signed char var_19 = (signed char)-53;
int arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -57549952;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 4051246262U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
