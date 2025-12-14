#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -523412408228390005LL;
signed char var_1 = (signed char)65;
unsigned short var_4 = (unsigned short)28211;
signed char var_5 = (signed char)-22;
signed char var_6 = (signed char)-64;
long long int var_7 = 8312197067725630487LL;
int zero = 0;
unsigned char var_10 = (unsigned char)220;
signed char var_11 = (signed char)27;
signed char var_12 = (signed char)73;
unsigned short var_13 = (unsigned short)32534;
unsigned char var_14 = (unsigned char)93;
unsigned short var_15 = (unsigned short)63984;
signed char arr_0 [20] ;
signed char arr_1 [20] ;
int arr_3 [20] [20] [20] ;
unsigned long long int arr_5 [20] [20] [20] ;
long long int arr_6 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1420935178 : 1673822960;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8382876863986524244ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 7475130641314769783LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
