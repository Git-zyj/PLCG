#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9315629524699225293ULL;
unsigned long long int var_12 = 16470623299083147438ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)38888;
unsigned long long int var_14 = 90946751946174834ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
