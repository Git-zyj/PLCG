#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)24992;
long long int var_9 = -7255071761983645152LL;
_Bool var_14 = (_Bool)1;
unsigned int var_17 = 617040077U;
unsigned int var_18 = 234238683U;
signed char var_19 = (signed char)-93;
int zero = 0;
long long int var_20 = -2550518592246022211LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-23528;
_Bool var_23 = (_Bool)0;
short var_24 = (short)15465;
int arr_0 [20] ;
unsigned long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -1764531516;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 6956677774130473869ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
