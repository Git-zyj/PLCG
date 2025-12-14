#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
unsigned char var_2 = (unsigned char)205;
unsigned char var_3 = (unsigned char)186;
unsigned char var_4 = (unsigned char)29;
unsigned char var_5 = (unsigned char)24;
unsigned char var_6 = (unsigned char)255;
unsigned char var_7 = (unsigned char)131;
unsigned char var_8 = (unsigned char)111;
unsigned char var_9 = (unsigned char)0;
int zero = 0;
unsigned char var_10 = (unsigned char)78;
unsigned char var_11 = (unsigned char)74;
unsigned char arr_1 [20] ;
unsigned char arr_2 [20] ;
unsigned char arr_4 [20] ;
unsigned char arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)229 : (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)120;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
