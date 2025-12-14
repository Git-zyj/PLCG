#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-31334;
unsigned short var_3 = (unsigned short)20335;
unsigned int var_4 = 1023432300U;
unsigned short var_6 = (unsigned short)33359;
short var_7 = (short)3776;
short var_8 = (short)-4356;
short var_9 = (short)-2955;
signed char var_10 = (signed char)40;
short var_12 = (short)8118;
unsigned int var_13 = 2785955799U;
short var_14 = (short)27255;
unsigned short var_15 = (unsigned short)9513;
short var_18 = (short)-15439;
int zero = 0;
unsigned int var_19 = 2893944141U;
unsigned int var_20 = 1306709750U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1352405578U;
int var_23 = -1761655805;
signed char var_24 = (signed char)120;
_Bool var_25 = (_Bool)1;
unsigned char arr_0 [12] ;
short arr_5 [12] [12] ;
short arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)2231 : (short)-17790;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-1564 : (short)-1795;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
