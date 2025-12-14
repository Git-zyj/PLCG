#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59521;
unsigned int var_1 = 3286266476U;
unsigned char var_4 = (unsigned char)95;
unsigned int var_6 = 334394682U;
unsigned short var_8 = (unsigned short)25548;
unsigned short var_9 = (unsigned short)30623;
int zero = 0;
unsigned int var_10 = 3348470U;
unsigned short var_11 = (unsigned short)32520;
unsigned int var_12 = 1159080904U;
unsigned short var_13 = (unsigned short)35743;
unsigned char arr_0 [22] ;
unsigned short arr_1 [22] [22] ;
unsigned short arr_4 [22] ;
unsigned char arr_8 [22] ;
unsigned short arr_9 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)33750;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)42883;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)20519;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
