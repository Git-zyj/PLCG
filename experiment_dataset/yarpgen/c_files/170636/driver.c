#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1983922184;
unsigned long long int var_4 = 13774655765116639956ULL;
unsigned int var_9 = 1005216234U;
unsigned char var_11 = (unsigned char)111;
int zero = 0;
short var_18 = (short)16654;
short var_19 = (short)16763;
long long int var_20 = 5432898092107428572LL;
unsigned short var_21 = (unsigned short)12572;
signed char arr_1 [16] ;
unsigned short arr_5 [16] ;
long long int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)3848;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -2177019007675190909LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
