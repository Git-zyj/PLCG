#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-98;
unsigned long long int var_3 = 12548816123891274110ULL;
unsigned char var_4 = (unsigned char)144;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)34192;
unsigned short var_13 = (unsigned short)52953;
int zero = 0;
long long int var_16 = 7529826125577836271LL;
unsigned char var_17 = (unsigned char)105;
long long int var_18 = -7583819180204395815LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)127;
short var_21 = (short)-21239;
short var_22 = (short)11208;
signed char var_23 = (signed char)44;
unsigned short var_24 = (unsigned short)43535;
long long int arr_0 [15] ;
int arr_1 [15] [15] ;
unsigned short arr_2 [15] ;
unsigned short arr_4 [15] ;
_Bool arr_6 [15] ;
int arr_7 [15] ;
unsigned short arr_13 [15] [15] [15] [15] [15] [15] [15] ;
_Bool arr_15 [15] [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -4887717184672721049LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -1943636402;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)48125;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)19173;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1759084181 : -292640029;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)11346;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
