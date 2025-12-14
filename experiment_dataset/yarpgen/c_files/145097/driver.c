#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 55376104996426126LL;
unsigned long long int var_1 = 7454625920203458247ULL;
unsigned int var_2 = 2963219058U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7735016347133266531ULL;
_Bool var_6 = (_Bool)1;
int var_7 = -664997409;
unsigned short var_9 = (unsigned short)34766;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)164;
unsigned char var_13 = (unsigned char)70;
long long int var_14 = -6222447266570030797LL;
unsigned char var_15 = (unsigned char)248;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)63897;
unsigned long long int var_18 = 4934782966381259677ULL;
signed char var_19 = (signed char)116;
int var_20 = -619175150;
_Bool arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
