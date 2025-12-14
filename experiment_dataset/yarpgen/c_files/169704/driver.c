#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24963;
unsigned int var_5 = 1725047760U;
unsigned int var_6 = 1871526816U;
unsigned char var_7 = (unsigned char)129;
unsigned int var_9 = 2664992355U;
int zero = 0;
unsigned long long int var_10 = 15198544857087759981ULL;
unsigned long long int var_11 = 2677579271811770786ULL;
unsigned short var_12 = (unsigned short)27972;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
