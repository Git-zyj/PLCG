#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)78;
signed char var_2 = (signed char)-86;
unsigned char var_9 = (unsigned char)245;
signed char var_11 = (signed char)-41;
signed char var_12 = (signed char)37;
signed char var_13 = (signed char)118;
signed char var_14 = (signed char)30;
int zero = 0;
signed char var_17 = (signed char)-6;
unsigned char var_18 = (unsigned char)23;
signed char var_19 = (signed char)-80;
signed char var_20 = (signed char)84;
unsigned char var_21 = (unsigned char)100;
unsigned char var_22 = (unsigned char)61;
signed char var_23 = (signed char)-67;
unsigned char var_24 = (unsigned char)12;
signed char var_25 = (signed char)28;
signed char var_26 = (signed char)-63;
unsigned char arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
signed char arr_2 [16] ;
unsigned char arr_4 [16] ;
signed char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-19;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
