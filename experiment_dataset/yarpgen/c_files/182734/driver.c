#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6638;
unsigned char var_11 = (unsigned char)250;
unsigned short var_12 = (unsigned short)40829;
int zero = 0;
unsigned long long int var_15 = 10012575989900611906ULL;
short var_16 = (short)26461;
void init() {
}

void checksum() {
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
