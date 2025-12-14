#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24739;
signed char var_1 = (signed char)-8;
unsigned char var_2 = (unsigned char)79;
short var_3 = (short)-32520;
short var_7 = (short)-14123;
int zero = 0;
short var_12 = (short)-29710;
signed char var_13 = (signed char)-73;
short var_14 = (short)-9956;
unsigned long long int var_15 = 5367621106124386479ULL;
int var_16 = -837700044;
signed char arr_3 [13] [13] ;
signed char arr_4 [13] ;
unsigned long long int arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 6322598376489275851ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
