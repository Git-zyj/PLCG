#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 2049080922533135563ULL;
unsigned long long int var_10 = 16185686667978305917ULL;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
unsigned char var_13 = (unsigned char)191;
unsigned long long int var_14 = 8250619965347544478ULL;
unsigned long long int var_15 = 3643921802450110905ULL;
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
