#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)122;
unsigned char var_8 = (unsigned char)229;
signed char var_9 = (signed char)47;
unsigned char var_10 = (unsigned char)64;
unsigned char var_14 = (unsigned char)55;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)127;
int zero = 0;
unsigned char var_20 = (unsigned char)220;
unsigned char var_21 = (unsigned char)81;
unsigned short var_22 = (unsigned short)40561;
unsigned char var_23 = (unsigned char)108;
unsigned short var_24 = (unsigned short)4808;
unsigned char var_25 = (unsigned char)127;
unsigned char var_26 = (unsigned char)97;
unsigned char var_27 = (unsigned char)81;
unsigned char var_28 = (unsigned char)82;
int var_29 = 2142914689;
unsigned char var_30 = (unsigned char)42;
unsigned char var_31 = (unsigned char)182;
long long int arr_10 [10] ;
_Bool arr_13 [10] ;
unsigned char arr_14 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -602365358747446109LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)38;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
