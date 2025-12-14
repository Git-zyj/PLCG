#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-31781;
int var_2 = -1132104158;
short var_3 = (short)27552;
unsigned short var_4 = (unsigned short)11641;
unsigned short var_5 = (unsigned short)39719;
signed char var_6 = (signed char)-54;
signed char var_7 = (signed char)-39;
unsigned short var_8 = (unsigned short)7031;
int var_9 = 1052422503;
unsigned int var_10 = 4233320748U;
short var_12 = (short)15037;
int zero = 0;
unsigned short var_13 = (unsigned short)41706;
short var_14 = (short)25131;
unsigned short var_15 = (unsigned short)63526;
signed char var_16 = (signed char)102;
short var_17 = (short)2022;
unsigned short var_18 = (unsigned short)11770;
unsigned short arr_3 [14] ;
unsigned int arr_7 [14] ;
unsigned char arr_8 [14] [14] [14] [14] ;
int arr_10 [14] [14] [14] ;
signed char arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)31187;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 752374461U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -1256322212;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (signed char)-45;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
