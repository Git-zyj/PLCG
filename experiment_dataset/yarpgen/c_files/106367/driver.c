#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned int var_1 = 2166671747U;
unsigned char var_3 = (unsigned char)180;
signed char var_4 = (signed char)-14;
unsigned int var_5 = 801493292U;
unsigned char var_7 = (unsigned char)1;
signed char var_8 = (signed char)22;
unsigned char var_10 = (unsigned char)3;
signed char var_11 = (signed char)-83;
short var_12 = (short)19672;
int zero = 0;
unsigned char var_13 = (unsigned char)77;
unsigned char var_14 = (unsigned char)192;
signed char var_15 = (signed char)-116;
signed char var_16 = (signed char)-92;
short var_17 = (short)11103;
short var_18 = (short)27249;
unsigned int arr_1 [25] ;
long long int arr_4 [25] ;
unsigned int arr_6 [25] [25] [25] [25] ;
long long int arr_7 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1549211372U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -2611235141327650393LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2427578568U : 1997383495U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2901317002239000232LL : -339803715793643418LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
