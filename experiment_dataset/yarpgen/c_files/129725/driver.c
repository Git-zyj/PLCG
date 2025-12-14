#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
long long int var_5 = 4663784771038776426LL;
unsigned char var_13 = (unsigned char)160;
_Bool var_14 = (_Bool)0;
unsigned long long int var_17 = 7716588773678723432ULL;
unsigned char var_18 = (unsigned char)218;
int zero = 0;
unsigned int var_20 = 3631059382U;
unsigned short var_21 = (unsigned short)10421;
unsigned int var_22 = 3937961477U;
unsigned char var_23 = (unsigned char)141;
unsigned short var_24 = (unsigned short)44918;
unsigned long long int var_25 = 8045903651684949982ULL;
long long int var_26 = -4903844255707117185LL;
unsigned short arr_1 [10] ;
long long int arr_3 [10] [10] ;
_Bool arr_4 [10] [10] ;
signed char arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)48681;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 7299580624424849986LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)121 : (signed char)-27;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
