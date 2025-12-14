#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1566964213U;
short var_7 = (short)-2011;
short var_9 = (short)-26630;
int zero = 0;
unsigned long long int var_10 = 13018517383107347285ULL;
int var_11 = -2035274851;
unsigned long long int var_12 = 7363365498781274603ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
