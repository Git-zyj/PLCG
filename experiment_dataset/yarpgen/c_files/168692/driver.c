#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3063114776839449465LL;
short var_4 = (short)-31042;
unsigned short var_8 = (unsigned short)44108;
short var_9 = (short)-15170;
long long int var_12 = 4262765319503386415LL;
int zero = 0;
signed char var_13 = (signed char)109;
short var_14 = (short)-14874;
short var_15 = (short)-4807;
unsigned char var_16 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
