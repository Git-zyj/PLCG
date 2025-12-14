#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2127885344;
unsigned short var_1 = (unsigned short)35907;
signed char var_2 = (signed char)-35;
int var_3 = -1716089721;
unsigned short var_5 = (unsigned short)33853;
unsigned short var_6 = (unsigned short)60057;
signed char var_8 = (signed char)-12;
int zero = 0;
int var_12 = -381542704;
int var_13 = 1489217319;
unsigned short var_14 = (unsigned short)45843;
unsigned short var_15 = (unsigned short)45618;
unsigned char arr_1 [10] [10] ;
signed char arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-120;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
