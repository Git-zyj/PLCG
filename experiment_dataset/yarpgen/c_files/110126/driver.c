#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13202331840215431187ULL;
unsigned int var_1 = 939755067U;
short var_2 = (short)-38;
unsigned int var_6 = 67490872U;
signed char var_8 = (signed char)76;
long long int var_12 = -4316776157509718651LL;
signed char var_14 = (signed char)-69;
signed char var_16 = (signed char)55;
unsigned char var_17 = (unsigned char)87;
int zero = 0;
unsigned char var_18 = (unsigned char)177;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)41;
unsigned int var_22 = 2543533301U;
long long int var_23 = -2163872778764366267LL;
short arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-24863;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 8767342213561614321ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
