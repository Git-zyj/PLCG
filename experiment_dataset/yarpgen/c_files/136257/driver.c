#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36629;
unsigned char var_6 = (unsigned char)35;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)912;
int zero = 0;
short var_19 = (short)-3171;
unsigned short var_20 = (unsigned short)31150;
short var_21 = (short)-20050;
unsigned short var_22 = (unsigned short)40525;
unsigned long long int var_23 = 5216057279708599549ULL;
unsigned short var_24 = (unsigned short)18081;
short arr_0 [14] ;
unsigned char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-17546 : (short)-9859;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)3;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
