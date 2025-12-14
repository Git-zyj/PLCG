#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)191;
_Bool var_5 = (_Bool)1;
int var_8 = 1116762293;
unsigned short var_10 = (unsigned short)52114;
unsigned int var_11 = 2500815993U;
unsigned char var_13 = (unsigned char)29;
unsigned short var_15 = (unsigned short)28697;
int zero = 0;
unsigned char var_16 = (unsigned char)237;
unsigned int var_17 = 7239593U;
unsigned int var_18 = 925627023U;
unsigned char var_19 = (unsigned char)1;
unsigned char var_20 = (unsigned char)18;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)36663;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] ;
_Bool arr_4 [19] ;
unsigned long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)36022;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)27472;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 4968731680787963461ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
