#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)24234;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)64504;
unsigned char var_13 = (unsigned char)143;
unsigned short var_18 = (unsigned short)19263;
int zero = 0;
unsigned int var_20 = 3695556149U;
unsigned short var_21 = (unsigned short)45745;
short var_22 = (short)10676;
unsigned short var_23 = (unsigned short)57120;
_Bool var_24 = (_Bool)0;
long long int arr_1 [10] ;
unsigned char arr_4 [10] ;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -3839623663467850934LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)106 : (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24577 : (unsigned short)7673;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
