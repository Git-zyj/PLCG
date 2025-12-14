#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -868502835;
unsigned long long int var_4 = 7242999730544336902ULL;
signed char var_5 = (signed char)75;
unsigned int var_8 = 1292949918U;
long long int var_9 = -8966792314561097223LL;
unsigned long long int var_10 = 2606687716214337971ULL;
short var_11 = (short)23623;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)146;
int var_16 = 252985341;
short var_17 = (short)-18044;
unsigned long long int var_18 = 16524118504031987568ULL;
_Bool arr_0 [22] ;
long long int arr_1 [22] ;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 7690174139513733618LL : -6014867707968821078LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-67;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
