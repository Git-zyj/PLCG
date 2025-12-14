#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1330348768926472312ULL;
unsigned long long int var_19 = 127272392445961480ULL;
int zero = 0;
unsigned long long int var_20 = 9437354327781889560ULL;
unsigned long long int var_21 = 8403735525011892506ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
