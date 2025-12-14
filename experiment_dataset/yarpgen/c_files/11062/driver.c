#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)123;
int var_6 = -1138524523;
short var_7 = (short)-18874;
unsigned char var_9 = (unsigned char)79;
int zero = 0;
short var_11 = (short)-13659;
int var_12 = 574729936;
short var_13 = (short)-30485;
int var_14 = -1340166742;
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
