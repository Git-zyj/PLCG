#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1280751732;
signed char var_6 = (signed char)-97;
unsigned long long int var_8 = 9152194583924474069ULL;
unsigned char var_9 = (unsigned char)22;
int zero = 0;
int var_14 = -1329619117;
short var_15 = (short)2236;
short var_16 = (short)-13170;
void init() {
}

void checksum() {
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
