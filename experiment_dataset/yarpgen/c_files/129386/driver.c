#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24334;
short var_2 = (short)-31362;
unsigned int var_3 = 2966918144U;
short var_4 = (short)2651;
unsigned short var_5 = (unsigned short)58047;
unsigned char var_7 = (unsigned char)8;
long long int var_9 = -8985579560977033858LL;
short var_10 = (short)22941;
unsigned char var_11 = (unsigned char)23;
int var_12 = -511858566;
unsigned int var_13 = 71405670U;
unsigned char var_14 = (unsigned char)146;
short var_15 = (short)-30809;
signed char var_16 = (signed char)81;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-14237;
signed char var_19 = (signed char)50;
signed char var_20 = (signed char)31;
signed char var_21 = (signed char)17;
unsigned int var_22 = 3471062063U;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)21608;
unsigned char var_25 = (unsigned char)207;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-2489;
short var_28 = (short)6783;
int arr_1 [17] [17] ;
long long int arr_3 [17] ;
long long int arr_4 [17] [17] [17] ;
_Bool arr_5 [17] [17] ;
int arr_6 [17] [17] [17] ;
_Bool arr_7 [17] ;
signed char arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 269352253;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1054733462785745206LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -6597772736305855148LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -962294333 : -130629242;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (signed char)-23;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
