#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)48;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)9;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_16 = (signed char)-114;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)160;
int zero = 0;
unsigned int var_19 = 217261553U;
unsigned char var_20 = (unsigned char)221;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
signed char arr_2 [14] ;
unsigned short arr_3 [14] ;
unsigned short arr_4 [14] [14] ;
unsigned char arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)8153;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)38944;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)170 : (unsigned char)229;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
