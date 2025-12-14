#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1155991871;
unsigned int var_4 = 1228050118U;
long long int var_10 = 8102267389956381004LL;
int zero = 0;
int var_13 = 2126379730;
short var_14 = (short)20290;
short var_15 = (short)30515;
void init() {
}

void checksum() {
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
