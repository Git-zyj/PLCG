#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)28;
unsigned short var_5 = (unsigned short)52865;
unsigned char var_8 = (unsigned char)82;
short var_10 = (short)-22221;
unsigned char var_12 = (unsigned char)234;
unsigned short var_13 = (unsigned short)58370;
int var_14 = 1819772103;
unsigned char var_15 = (unsigned char)191;
int zero = 0;
unsigned long long int var_17 = 13236928123713189566ULL;
unsigned short var_18 = (unsigned short)30192;
unsigned long long int var_19 = 10454998846600755938ULL;
short var_20 = (short)20663;
signed char var_21 = (signed char)3;
unsigned short arr_0 [20] [20] ;
unsigned short arr_1 [20] ;
int arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)59232 : (unsigned short)31248;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)9756;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = -176789873;
}

void checksum() {
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
