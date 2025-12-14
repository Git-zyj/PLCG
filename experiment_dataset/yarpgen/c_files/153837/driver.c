#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12279;
unsigned char var_3 = (unsigned char)188;
signed char var_4 = (signed char)21;
signed char var_6 = (signed char)-77;
unsigned char var_7 = (unsigned char)51;
unsigned short var_8 = (unsigned short)52731;
unsigned short var_9 = (unsigned short)19547;
unsigned int var_11 = 3742650785U;
unsigned char var_17 = (unsigned char)155;
signed char var_18 = (signed char)-43;
int zero = 0;
unsigned char var_19 = (unsigned char)108;
unsigned char var_20 = (unsigned char)42;
unsigned int var_21 = 3712095112U;
signed char arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-40 : (signed char)-61;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
