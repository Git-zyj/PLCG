#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7142859103682761785ULL;
unsigned char var_7 = (unsigned char)250;
unsigned short var_9 = (unsigned short)29469;
int zero = 0;
unsigned int var_13 = 3083194314U;
unsigned short var_14 = (unsigned short)12689;
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
