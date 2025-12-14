#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
unsigned char var_1 = (unsigned char)94;
unsigned char var_2 = (unsigned char)176;
unsigned char var_3 = (unsigned char)37;
unsigned char var_8 = (unsigned char)41;
unsigned char var_9 = (unsigned char)233;
unsigned char var_10 = (unsigned char)154;
int zero = 0;
unsigned char var_11 = (unsigned char)90;
unsigned char var_12 = (unsigned char)53;
unsigned char var_13 = (unsigned char)71;
unsigned char arr_4 [23] ;
unsigned char arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)202;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
