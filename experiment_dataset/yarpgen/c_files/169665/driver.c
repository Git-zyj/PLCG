#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 885203266U;
long long int var_15 = -7739946761506843387LL;
int zero = 0;
signed char var_19 = (signed char)39;
unsigned long long int var_20 = 211992473381410456ULL;
unsigned char var_21 = (unsigned char)61;
unsigned long long int var_22 = 9722603353198457199ULL;
unsigned long long int var_23 = 10168040084348823814ULL;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)35554;
signed char var_26 = (signed char)-41;
int var_27 = -1850696200;
short arr_0 [19] ;
signed char arr_1 [19] ;
unsigned long long int arr_3 [19] [19] ;
long long int arr_5 [20] ;
signed char arr_7 [20] [20] ;
signed char arr_9 [20] ;
unsigned char arr_13 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)21316;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 8254829195476389352ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -7954013551295749057LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (unsigned char)130;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
