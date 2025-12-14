#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16103;
unsigned short var_3 = (unsigned short)47749;
unsigned short var_6 = (unsigned short)25062;
unsigned char var_9 = (unsigned char)20;
short var_10 = (short)8705;
int zero = 0;
int var_13 = 519715662;
int var_14 = -1397648939;
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
