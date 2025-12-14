#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25792;
int var_5 = -984033274;
int var_14 = 885930376;
int zero = 0;
unsigned long long int var_15 = 3374241557829056992ULL;
unsigned char var_16 = (unsigned char)182;
short var_17 = (short)1146;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
