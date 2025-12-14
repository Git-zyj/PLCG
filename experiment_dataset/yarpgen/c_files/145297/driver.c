#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2587061603U;
_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)20;
long long int var_7 = 6230727309261547920LL;
unsigned short var_8 = (unsigned short)59239;
unsigned short var_14 = (unsigned short)26982;
signed char var_17 = (signed char)-56;
unsigned long long int var_18 = 9580740060388714660ULL;
int zero = 0;
unsigned int var_20 = 4146294901U;
unsigned int var_21 = 1599201470U;
unsigned char var_22 = (unsigned char)132;
int var_23 = -1541201829;
_Bool var_24 = (_Bool)1;
short var_25 = (short)29203;
unsigned long long int arr_1 [25] [25] ;
long long int arr_4 [25] [25] [25] ;
unsigned long long int arr_7 [25] [25] ;
_Bool arr_8 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 11556820427079059528ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1748920548984197115LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 16739885913165139476ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
