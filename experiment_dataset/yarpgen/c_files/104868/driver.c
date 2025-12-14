#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-76;
unsigned int var_4 = 2510793479U;
int var_5 = 343396187;
unsigned long long int var_6 = 12951752416458628039ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)52356;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3827763842U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3506017327U;
_Bool arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2357298763044494517ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)226 : (unsigned char)148;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
