#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1887861988U;
short var_3 = (short)20654;
unsigned short var_4 = (unsigned short)15000;
unsigned char var_5 = (unsigned char)213;
short var_8 = (short)-30767;
unsigned short var_11 = (unsigned short)3107;
short var_12 = (short)24031;
long long int var_14 = 3906690308635952550LL;
int zero = 0;
unsigned long long int var_15 = 5850539078137925537ULL;
signed char var_16 = (signed char)59;
int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 821380477;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
