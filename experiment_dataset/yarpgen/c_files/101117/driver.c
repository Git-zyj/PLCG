#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23993;
short var_4 = (short)-17550;
unsigned int var_5 = 2850606698U;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)85;
unsigned short var_8 = (unsigned short)63982;
unsigned char var_9 = (unsigned char)111;
short var_10 = (short)-16590;
unsigned short var_11 = (unsigned short)422;
long long int var_14 = -7739298237005074787LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)94;
int zero = 0;
unsigned short var_18 = (unsigned short)44738;
short var_19 = (short)-1939;
unsigned int var_20 = 2733570078U;
signed char var_21 = (signed char)122;
_Bool var_22 = (_Bool)1;
long long int var_23 = 1728861652861858354LL;
_Bool var_24 = (_Bool)1;
_Bool arr_1 [13] [13] ;
signed char arr_6 [13] [13] ;
long long int arr_7 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 4702065401819102462LL;
}

void checksum() {
    hash(&seed, var_18);
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
