#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)152;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)186;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-26;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)211;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
_Bool arr_0 [24] ;
unsigned char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)102;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
