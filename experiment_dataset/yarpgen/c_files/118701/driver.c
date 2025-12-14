#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3837744636U;
short var_1 = (short)2285;
unsigned char var_9 = (unsigned char)187;
short var_18 = (short)8170;
int zero = 0;
int var_20 = 67004872;
unsigned int var_21 = 1731833232U;
long long int var_22 = -7703526651092342783LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
