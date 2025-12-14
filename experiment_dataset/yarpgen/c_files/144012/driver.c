#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned char var_2 = (unsigned char)140;
short var_4 = (short)32399;
int var_5 = -2011158566;
unsigned char var_6 = (unsigned char)126;
unsigned short var_8 = (unsigned short)44857;
short var_11 = (short)-22309;
unsigned int var_15 = 2354915441U;
int var_16 = 1191263183;
int var_17 = -2062834950;
int zero = 0;
unsigned int var_19 = 2640325042U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1168524396U;
int var_22 = 1634675490;
short var_23 = (short)15240;
short var_24 = (short)-10632;
short arr_2 [13] [13] ;
unsigned char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-19391;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)26;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
