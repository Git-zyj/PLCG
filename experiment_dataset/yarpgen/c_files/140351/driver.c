#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17024380322389243580ULL;
unsigned long long int var_10 = 287972865826879146ULL;
signed char var_12 = (signed char)34;
int zero = 0;
signed char var_16 = (signed char)46;
unsigned long long int var_17 = 12611238173303511797ULL;
int var_18 = -952378106;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 16911490058076912566ULL;
long long int var_21 = -7415164889992573191LL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-9;
signed char arr_1 [11] ;
unsigned char arr_2 [11] ;
unsigned short arr_3 [23] ;
signed char arr_4 [23] [23] ;
unsigned long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)21198;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2668406747180938249ULL;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
