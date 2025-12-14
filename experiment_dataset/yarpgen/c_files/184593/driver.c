#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27204;
signed char var_4 = (signed char)-39;
signed char var_5 = (signed char)-90;
unsigned char var_8 = (unsigned char)222;
signed char var_10 = (signed char)-48;
unsigned char var_11 = (unsigned char)241;
unsigned char var_14 = (unsigned char)164;
int zero = 0;
short var_16 = (short)24732;
unsigned char var_17 = (unsigned char)191;
unsigned short var_18 = (unsigned short)410;
unsigned char var_19 = (unsigned char)56;
unsigned char arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)7;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
