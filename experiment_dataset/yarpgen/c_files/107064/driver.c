#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8826514944452190896ULL;
int var_8 = -46843065;
short var_9 = (short)-23382;
int zero = 0;
unsigned char var_16 = (unsigned char)86;
unsigned char var_17 = (unsigned char)197;
void init() {
}

void checksum() {
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
