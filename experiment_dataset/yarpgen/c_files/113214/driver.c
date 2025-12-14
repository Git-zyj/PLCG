#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned char var_1 = (unsigned char)25;
signed char var_5 = (signed char)-34;
signed char var_18 = (signed char)-10;
unsigned char var_19 = (unsigned char)195;
int zero = 0;
signed char var_20 = (signed char)102;
unsigned char var_21 = (unsigned char)30;
unsigned char var_22 = (unsigned char)204;
unsigned char var_23 = (unsigned char)152;
unsigned char var_24 = (unsigned char)215;
unsigned char var_25 = (unsigned char)159;
signed char var_26 = (signed char)-127;
unsigned char arr_0 [13] [13] ;
signed char arr_1 [13] [13] ;
signed char arr_2 [13] [13] ;
signed char arr_3 [13] [13] ;
signed char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-5;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
