#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)13264;
unsigned int var_6 = 1276908625U;
int var_9 = -1933226760;
int var_11 = 862526197;
unsigned short var_12 = (unsigned short)44592;
int zero = 0;
unsigned int var_14 = 783899998U;
unsigned char var_15 = (unsigned char)37;
long long int var_16 = -6600137323958788208LL;
int var_17 = -946692135;
unsigned char var_18 = (unsigned char)75;
int var_19 = 1236373082;
unsigned char var_20 = (unsigned char)128;
int var_21 = 1836377307;
long long int arr_1 [16] [16] ;
unsigned char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -1085864813497638784LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)211 : (unsigned char)63;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
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
