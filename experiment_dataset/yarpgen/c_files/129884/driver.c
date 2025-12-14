#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
unsigned char var_4 = (unsigned char)175;
unsigned char var_9 = (unsigned char)149;
int zero = 0;
long long int var_17 = -1330101023593673651LL;
long long int var_18 = 3472389965923759747LL;
unsigned char var_19 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
