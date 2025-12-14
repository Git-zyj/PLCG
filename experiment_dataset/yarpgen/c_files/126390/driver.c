#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
signed char var_1 = (signed char)-84;
unsigned short var_2 = (unsigned short)62318;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 17913600228956422009ULL;
signed char var_21 = (signed char)84;
unsigned int var_22 = 2439731934U;
unsigned char var_23 = (unsigned char)80;
signed char var_24 = (signed char)-20;
unsigned long long int var_25 = 18363114184168810335ULL;
signed char var_26 = (signed char)115;
long long int var_27 = 8617162010768696993LL;
int arr_0 [12] ;
unsigned int arr_2 [12] ;
unsigned char arr_7 [12] [12] ;
_Bool arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -1668063863;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 735145668U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
