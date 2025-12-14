#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2106895149;
signed char var_12 = (signed char)-26;
unsigned int var_15 = 1042606500U;
long long int var_17 = 324795015837372945LL;
int zero = 0;
long long int var_20 = -7554423116438331295LL;
unsigned long long int var_21 = 4495592134460313046ULL;
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
