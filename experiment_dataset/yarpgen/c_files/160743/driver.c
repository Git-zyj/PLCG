#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
unsigned char var_3 = (unsigned char)205;
signed char var_10 = (signed char)85;
signed char var_14 = (signed char)45;
int zero = 0;
unsigned long long int var_16 = 5311678240572493634ULL;
short var_17 = (short)12123;
short var_18 = (short)8440;
unsigned char arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)228;
}

void checksum() {
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
