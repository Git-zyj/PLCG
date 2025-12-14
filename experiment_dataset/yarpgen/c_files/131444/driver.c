#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17477;
unsigned int var_1 = 690256439U;
long long int var_2 = 7447085190330790177LL;
int var_4 = -1643106343;
long long int var_5 = -6175507011574972357LL;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)251;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)22599;
int var_15 = 1736960878;
int zero = 0;
int var_16 = -1337659332;
signed char var_17 = (signed char)55;
signed char var_18 = (signed char)13;
unsigned int var_19 = 3102776989U;
unsigned short arr_0 [22] ;
unsigned int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)58979;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 2044028390U;
}

void checksum() {
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
