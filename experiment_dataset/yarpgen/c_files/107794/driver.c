#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8405869220580911269ULL;
unsigned long long int var_7 = 16437363083490621719ULL;
unsigned long long int var_12 = 9246915557826448761ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)228;
short var_17 = (short)-6331;
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
