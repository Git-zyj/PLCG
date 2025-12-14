#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 7991407382896657199ULL;
short var_9 = (short)-3632;
int var_14 = 2079092493;
unsigned char var_16 = (unsigned char)242;
int zero = 0;
short var_17 = (short)3308;
unsigned long long int var_18 = 17608443346666095048ULL;
unsigned long long int var_19 = 8045372016884185381ULL;
void init() {
}

void checksum() {
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
