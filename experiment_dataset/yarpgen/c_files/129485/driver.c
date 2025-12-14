#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
long long int var_1 = -4808525418677962361LL;
unsigned short var_3 = (unsigned short)28723;
signed char var_4 = (signed char)-69;
short var_5 = (short)-25546;
short var_6 = (short)7090;
short var_7 = (short)2023;
int var_8 = 1365532537;
int zero = 0;
short var_10 = (short)3944;
unsigned short var_11 = (unsigned short)6442;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)75;
unsigned short var_14 = (unsigned short)55144;
unsigned short var_15 = (unsigned short)38448;
unsigned char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)215 : (unsigned char)220;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
