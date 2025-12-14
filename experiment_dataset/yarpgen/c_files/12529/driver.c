#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52195;
short var_2 = (short)22298;
unsigned short var_4 = (unsigned short)51565;
unsigned char var_5 = (unsigned char)135;
long long int var_9 = 6623378808676054140LL;
unsigned short var_10 = (unsigned short)32292;
int zero = 0;
long long int var_12 = 6231771950290313943LL;
long long int var_13 = -8395837998209963491LL;
unsigned short var_14 = (unsigned short)52086;
short var_15 = (short)23072;
long long int var_16 = 4824620788880845020LL;
long long int arr_0 [13] [13] ;
unsigned char arr_1 [13] [13] ;
unsigned char arr_2 [13] [13] ;
unsigned char arr_3 [13] ;
long long int arr_4 [13] [13] [13] ;
unsigned char arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -9113704635193708944LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -7885858538267358504LL : -8971025543160025536LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)47 : (unsigned char)28;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
