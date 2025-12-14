#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -658906322;
unsigned short var_4 = (unsigned short)22163;
int var_6 = 330141736;
unsigned short var_7 = (unsigned short)41749;
int var_8 = -205535967;
short var_11 = (short)7415;
unsigned int var_12 = 1886672346U;
int zero = 0;
long long int var_13 = 4546427146125911711LL;
unsigned short var_14 = (unsigned short)34063;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)232;
unsigned char arr_0 [18] ;
short arr_1 [18] [18] ;
int arr_2 [18] ;
int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-15560;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -818329034;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1047059686;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
