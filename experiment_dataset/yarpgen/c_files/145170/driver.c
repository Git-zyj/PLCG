#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)248;
unsigned char var_2 = (unsigned char)136;
unsigned char var_3 = (unsigned char)251;
signed char var_5 = (signed char)-111;
unsigned int var_7 = 3384084688U;
unsigned char var_12 = (unsigned char)23;
int zero = 0;
unsigned int var_14 = 2782337931U;
unsigned int var_15 = 3969590279U;
short var_16 = (short)-4151;
short var_17 = (short)28452;
short var_18 = (short)20641;
short var_19 = (short)-5802;
signed char var_20 = (signed char)-4;
short var_21 = (short)-15676;
unsigned char arr_0 [16] ;
unsigned short arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5312 : (unsigned short)37694;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
