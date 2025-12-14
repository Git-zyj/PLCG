#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 270970306U;
unsigned char var_8 = (unsigned char)155;
int var_9 = -754547426;
unsigned int var_12 = 1198347882U;
unsigned int var_14 = 2529701026U;
int zero = 0;
short var_16 = (short)23104;
short var_17 = (short)-29760;
signed char var_18 = (signed char)-41;
unsigned int var_19 = 1742793096U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
