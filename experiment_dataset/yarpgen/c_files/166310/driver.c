#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32720;
unsigned long long int var_4 = 16870746980332095408ULL;
unsigned int var_9 = 1288483092U;
unsigned char var_11 = (unsigned char)79;
int zero = 0;
unsigned long long int var_12 = 15142239324352893482ULL;
unsigned char var_13 = (unsigned char)196;
unsigned char var_14 = (unsigned char)10;
void init() {
}

void checksum() {
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
