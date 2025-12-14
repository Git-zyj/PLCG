#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43630;
long long int var_4 = 3150371270961615043LL;
unsigned long long int var_7 = 8990274533813771846ULL;
int zero = 0;
int var_11 = 1816146884;
unsigned char var_12 = (unsigned char)138;
void init() {
}

void checksum() {
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
