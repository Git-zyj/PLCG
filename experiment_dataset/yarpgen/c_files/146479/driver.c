#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13906288785294243385ULL;
signed char var_7 = (signed char)-85;
unsigned char var_9 = (unsigned char)9;
int zero = 0;
unsigned char var_16 = (unsigned char)48;
short var_17 = (short)-27131;
unsigned long long int var_18 = 13764192516719410898ULL;
unsigned char var_19 = (unsigned char)119;
long long int var_20 = 242546529713800238LL;
unsigned char var_21 = (unsigned char)1;
unsigned long long int var_22 = 577960806562286369ULL;
_Bool var_23 = (_Bool)0;
long long int arr_0 [20] ;
int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
unsigned long long int arr_5 [19] ;
unsigned char arr_3 [20] ;
unsigned long long int arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -8609976899041957479LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2084140607;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 11438647603951247865ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 16220619846052882601ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 11256451565840633920ULL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
