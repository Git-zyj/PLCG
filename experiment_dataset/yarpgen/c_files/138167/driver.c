#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1377;
unsigned char var_4 = (unsigned char)123;
signed char var_6 = (signed char)-121;
int var_7 = -2021777199;
int zero = 0;
int var_12 = 1214014381;
unsigned long long int var_13 = 12226251517103758711ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
