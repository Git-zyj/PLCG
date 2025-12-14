#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 360229291476524551ULL;
unsigned short var_3 = (unsigned short)45469;
unsigned short var_5 = (unsigned short)45407;
unsigned short var_6 = (unsigned short)27971;
int var_7 = 857756355;
unsigned char var_9 = (unsigned char)46;
int zero = 0;
unsigned int var_13 = 1401773058U;
unsigned short var_14 = (unsigned short)47822;
void init() {
}

void checksum() {
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
