#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)20548;
unsigned long long int var_5 = 10511559531211835444ULL;
signed char var_8 = (signed char)72;
long long int var_11 = 2054150410821794682LL;
unsigned int var_12 = 3774236940U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4391228900065700867ULL;
int var_17 = 594461124;
int zero = 0;
unsigned short var_19 = (unsigned short)12020;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_4 [20] ;
unsigned char arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 12592809379139527473ULL : 13054330016456752590ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)8 : (unsigned char)5;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
