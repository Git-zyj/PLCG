#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)51;
unsigned short var_4 = (unsigned short)53717;
int var_5 = -403041125;
unsigned short var_6 = (unsigned short)49212;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)53672;
int var_10 = -316177251;
unsigned int var_12 = 2319823359U;
signed char var_13 = (signed char)31;
int zero = 0;
int var_15 = 240332959;
unsigned short var_16 = (unsigned short)19979;
signed char var_17 = (signed char)45;
signed char var_18 = (signed char)-103;
signed char var_19 = (signed char)-89;
short var_20 = (short)24314;
short var_21 = (short)-26519;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-90;
unsigned int var_24 = 2472101588U;
unsigned int var_25 = 2175209593U;
short var_26 = (short)637;
unsigned short var_27 = (unsigned short)62525;
signed char var_28 = (signed char)79;
unsigned int arr_0 [22] [22] ;
signed char arr_1 [22] ;
unsigned short arr_2 [22] [22] ;
signed char arr_3 [22] [22] ;
short arr_5 [22] [22] [22] ;
signed char arr_6 [22] [22] [22] [22] ;
int arr_7 [22] ;
unsigned char arr_14 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 869432646U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)41152;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)23754;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -636324740;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)157;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
