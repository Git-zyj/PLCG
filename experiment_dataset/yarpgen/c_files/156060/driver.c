#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1180513025;
signed char var_4 = (signed char)22;
int var_5 = -1777002076;
unsigned char var_6 = (unsigned char)232;
int zero = 0;
signed char var_10 = (signed char)26;
long long int var_11 = -6610583928327868362LL;
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
