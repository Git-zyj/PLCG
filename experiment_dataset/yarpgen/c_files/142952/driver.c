#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)128;
int var_9 = 1198500108;
unsigned long long int var_12 = 3140013456912504976ULL;
int zero = 0;
int var_16 = -782907473;
signed char var_17 = (signed char)-63;
short var_18 = (short)-14180;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
