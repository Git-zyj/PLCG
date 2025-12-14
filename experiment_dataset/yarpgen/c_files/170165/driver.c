#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)171;
unsigned char var_3 = (unsigned char)188;
unsigned char var_17 = (unsigned char)218;
unsigned char var_19 = (unsigned char)40;
int zero = 0;
unsigned char var_20 = (unsigned char)158;
unsigned char var_21 = (unsigned char)255;
unsigned char var_22 = (unsigned char)20;
unsigned char var_23 = (unsigned char)254;
unsigned char var_24 = (unsigned char)189;
unsigned char var_25 = (unsigned char)183;
unsigned char var_26 = (unsigned char)134;
unsigned char arr_0 [20] ;
unsigned char arr_3 [22] [22] ;
unsigned char arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)184 : (unsigned char)196;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
