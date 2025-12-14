#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2572643344U;
signed char var_1 = (signed char)33;
unsigned short var_2 = (unsigned short)13922;
unsigned long long int var_3 = 14190323583797117600ULL;
unsigned int var_6 = 957483816U;
int var_9 = -2141214770;
int zero = 0;
signed char var_10 = (signed char)-67;
unsigned short var_11 = (unsigned short)8848;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
