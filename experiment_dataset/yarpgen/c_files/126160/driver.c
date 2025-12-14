#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4139253501U;
unsigned short var_2 = (unsigned short)44356;
unsigned short var_3 = (unsigned short)18400;
unsigned short var_5 = (unsigned short)60700;
unsigned short var_6 = (unsigned short)23904;
long long int var_11 = 6339615840745322002LL;
unsigned char var_12 = (unsigned char)74;
long long int var_13 = -669351279065118061LL;
int zero = 0;
unsigned char var_16 = (unsigned char)210;
unsigned short var_17 = (unsigned short)47934;
unsigned short var_18 = (unsigned short)49908;
unsigned short var_19 = (unsigned short)23265;
long long int var_20 = 9041048180361225297LL;
unsigned short var_21 = (unsigned short)34302;
int var_22 = -1519684931;
short arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
unsigned short arr_2 [11] [11] ;
unsigned char arr_4 [11] ;
unsigned short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-26514;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)36 : (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)6913;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16806 : (unsigned short)57180;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
