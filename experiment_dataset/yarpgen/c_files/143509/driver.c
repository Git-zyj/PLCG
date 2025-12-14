#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -930756833607308980LL;
unsigned int var_2 = 1111627163U;
int var_3 = 371008917;
int zero = 0;
signed char var_17 = (signed char)-5;
short var_18 = (short)-8705;
unsigned char var_19 = (unsigned char)53;
short var_20 = (short)-16014;
signed char var_21 = (signed char)-16;
short var_22 = (short)13582;
unsigned short var_23 = (unsigned short)44564;
long long int arr_0 [10] ;
unsigned char arr_1 [10] ;
int arr_2 [10] [10] ;
unsigned char arr_3 [20] [20] ;
short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -4432832695274115547LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1709811689;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)2 : (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)24255 : (short)-1824;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
