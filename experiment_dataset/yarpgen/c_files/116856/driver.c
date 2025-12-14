#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2399;
int var_1 = -2113865003;
unsigned long long int var_4 = 16264392575037836697ULL;
signed char var_5 = (signed char)98;
unsigned char var_6 = (unsigned char)51;
unsigned short var_9 = (unsigned short)16327;
long long int var_10 = 4949163945469252232LL;
short var_11 = (short)-24010;
int zero = 0;
unsigned long long int var_12 = 12105736998360651923ULL;
short var_13 = (short)20929;
unsigned char var_14 = (unsigned char)210;
int var_15 = 1981928709;
unsigned long long int var_16 = 3603448553587940283ULL;
unsigned long long int var_17 = 8831955716195506420ULL;
signed char arr_0 [20] ;
unsigned char arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)126 : (unsigned char)170;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
