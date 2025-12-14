#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
signed char var_1 = (signed char)-26;
short var_4 = (short)-12929;
int var_8 = -6493872;
int var_9 = 1733662049;
int var_11 = -128933015;
signed char var_14 = (signed char)11;
int zero = 0;
signed char var_19 = (signed char)-65;
signed char var_20 = (signed char)-78;
signed char var_21 = (signed char)63;
short var_22 = (short)18268;
int var_23 = -144555387;
int var_24 = -2007504061;
signed char var_25 = (signed char)-49;
signed char arr_2 [17] ;
int arr_4 [15] ;
unsigned char arr_11 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1318081522;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)189;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
