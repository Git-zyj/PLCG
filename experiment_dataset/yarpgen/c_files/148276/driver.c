#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1853467193769274132ULL;
unsigned long long int var_9 = 3773201382542377457ULL;
unsigned long long int var_11 = 3406879383625234868ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)48912;
unsigned short var_14 = (unsigned short)25612;
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
