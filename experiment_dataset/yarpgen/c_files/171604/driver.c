#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-15128;
int zero = 0;
long long int var_12 = -3969363222508611939LL;
unsigned char var_13 = (unsigned char)48;
unsigned long long int var_14 = 14671883542327556114ULL;
unsigned long long int var_15 = 10817156266874764733ULL;
unsigned long long int arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 15447654367579734728ULL : 2715824265270248271ULL;
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
