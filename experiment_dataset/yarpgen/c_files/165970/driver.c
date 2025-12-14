#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 10936459301841238706ULL;
int var_7 = 1516134668;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)81;
unsigned long long int var_17 = 94217070783653794ULL;
int var_19 = 1897186942;
int zero = 0;
unsigned short var_20 = (unsigned short)16957;
unsigned char var_21 = (unsigned char)225;
unsigned short var_22 = (unsigned short)54466;
unsigned char var_23 = (unsigned char)130;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-14;
unsigned short arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28194 : (unsigned short)46352;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
