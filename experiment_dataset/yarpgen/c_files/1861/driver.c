#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16688907920135075648ULL;
signed char var_4 = (signed char)-49;
unsigned char var_5 = (unsigned char)217;
int var_6 = -545997847;
unsigned char var_7 = (unsigned char)21;
unsigned long long int var_11 = 7059467200691407513ULL;
unsigned int var_13 = 1255450057U;
unsigned long long int var_16 = 3780046909195181778ULL;
signed char var_17 = (signed char)-41;
int zero = 0;
unsigned long long int var_19 = 13217548516147058102ULL;
short var_20 = (short)-4779;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1627421577U;
unsigned long long int var_23 = 14379055955559288337ULL;
long long int var_24 = 1797047976784495038LL;
unsigned long long int arr_0 [13] [13] ;
unsigned long long int arr_4 [23] ;
int arr_2 [13] [13] ;
unsigned int arr_6 [23] ;
signed char arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 6740175357451457040ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 7782289255811648102ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -320990109;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1346693727U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)62;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
