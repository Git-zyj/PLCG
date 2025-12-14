#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 102555731825573985LL;
unsigned char var_1 = (unsigned char)238;
unsigned short var_3 = (unsigned short)19345;
unsigned int var_9 = 2564176669U;
unsigned short var_11 = (unsigned short)30088;
long long int var_12 = -8552446592904477704LL;
signed char var_16 = (signed char)77;
int zero = 0;
short var_19 = (short)4164;
long long int var_20 = 6550077826124333032LL;
unsigned short var_21 = (unsigned short)3464;
unsigned char var_22 = (unsigned char)87;
unsigned char var_23 = (unsigned char)77;
unsigned short var_24 = (unsigned short)35361;
unsigned long long int var_25 = 16993722092802933827ULL;
long long int var_26 = 3207263106338002424LL;
unsigned char arr_0 [22] [22] ;
_Bool arr_1 [22] [22] ;
_Bool arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
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
