#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43293;
unsigned char var_1 = (unsigned char)213;
unsigned short var_3 = (unsigned short)11353;
unsigned short var_8 = (unsigned short)59447;
unsigned short var_9 = (unsigned short)7911;
int zero = 0;
unsigned long long int var_10 = 1970599499846420116ULL;
int var_11 = -944307535;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
