#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -527061355;
short var_2 = (short)-1292;
short var_3 = (short)25862;
long long int var_4 = 7979204436092286734LL;
unsigned int var_5 = 3706381391U;
short var_6 = (short)14683;
_Bool var_7 = (_Bool)1;
long long int var_8 = -6430217964108381549LL;
short var_9 = (short)31886;
unsigned short var_10 = (unsigned short)5280;
short var_11 = (short)-22108;
long long int var_12 = 2993654325174728031LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)34;
signed char var_15 = (signed char)75;
short var_16 = (short)-2230;
signed char var_17 = (signed char)-97;
int var_18 = 353441416;
unsigned char var_19 = (unsigned char)3;
unsigned short arr_4 [14] ;
unsigned char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)23546;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)68;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
