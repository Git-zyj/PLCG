#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5918687885827984228ULL;
signed char var_2 = (signed char)-40;
signed char var_3 = (signed char)-117;
int var_5 = 431158850;
signed char var_6 = (signed char)117;
unsigned short var_8 = (unsigned short)32972;
unsigned short var_10 = (unsigned short)38952;
unsigned int var_11 = 410651792U;
unsigned short var_12 = (unsigned short)54413;
unsigned int var_13 = 4105809265U;
signed char var_14 = (signed char)20;
unsigned int var_15 = 906669828U;
unsigned short var_16 = (unsigned short)47114;
unsigned char var_17 = (unsigned char)76;
int zero = 0;
signed char var_18 = (signed char)23;
unsigned long long int var_19 = 11823848063920008720ULL;
unsigned short var_20 = (unsigned short)32972;
unsigned short var_21 = (unsigned short)35472;
unsigned long long int arr_2 [15] ;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 11140443172886060444ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37960 : (unsigned short)3721;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
