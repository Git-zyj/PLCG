#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5480784411844661186ULL;
unsigned int var_2 = 1884283635U;
unsigned char var_4 = (unsigned char)187;
unsigned short var_5 = (unsigned short)60191;
short var_8 = (short)28745;
short var_13 = (short)15281;
long long int var_14 = 2508506226112198166LL;
int zero = 0;
long long int var_16 = 2051277146697380024LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)42120;
void init() {
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
