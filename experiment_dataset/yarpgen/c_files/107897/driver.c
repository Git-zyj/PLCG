#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
signed char var_1 = (signed char)126;
signed char var_4 = (signed char)-92;
long long int var_5 = 5129126343499660188LL;
signed char var_6 = (signed char)-9;
signed char var_8 = (signed char)-115;
int var_10 = -297879173;
int zero = 0;
short var_12 = (short)25695;
short var_13 = (short)30054;
unsigned int var_14 = 2269241062U;
short var_15 = (short)7475;
unsigned char var_16 = (unsigned char)51;
signed char var_17 = (signed char)-121;
signed char var_18 = (signed char)76;
int arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2001458060;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
