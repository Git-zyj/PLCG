#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
unsigned short var_3 = (unsigned short)9420;
unsigned char var_5 = (unsigned char)219;
signed char var_6 = (signed char)-39;
signed char var_8 = (signed char)11;
signed char var_9 = (signed char)114;
int zero = 0;
unsigned int var_12 = 1927257922U;
signed char var_13 = (signed char)96;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-80;
unsigned short var_16 = (unsigned short)57122;
int var_17 = -1591814243;
unsigned char arr_2 [24] ;
unsigned char arr_3 [25] ;
_Bool arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
