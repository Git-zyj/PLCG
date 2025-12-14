#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4806439468918917526LL;
unsigned int var_3 = 2209077532U;
unsigned char var_4 = (unsigned char)127;
unsigned int var_6 = 1183369566U;
int zero = 0;
long long int var_11 = 8159015643435004561LL;
long long int var_12 = 8421980914720674362LL;
long long int var_13 = 6064250766608336872LL;
unsigned long long int var_14 = 3842589991492782446ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
