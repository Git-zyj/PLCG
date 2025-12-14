#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1242734636;
short var_11 = (short)27242;
unsigned int var_13 = 1732280822U;
int zero = 0;
unsigned char var_14 = (unsigned char)241;
unsigned short var_15 = (unsigned short)45163;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
