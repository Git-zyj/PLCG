#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)111;
unsigned char var_4 = (unsigned char)197;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)29;
unsigned char var_7 = (unsigned char)50;
unsigned char var_8 = (unsigned char)227;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)136;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)230;
unsigned char var_17 = (unsigned char)74;
_Bool arr_2 [20] ;
_Bool arr_3 [20] ;
signed char arr_10 [17] ;
_Bool arr_12 [17] ;
unsigned char arr_13 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)144;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
