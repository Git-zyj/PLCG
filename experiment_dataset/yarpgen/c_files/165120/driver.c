#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3346582966U;
unsigned int var_5 = 1591638866U;
unsigned char var_6 = (unsigned char)21;
unsigned int var_10 = 293890571U;
unsigned char var_12 = (unsigned char)212;
int zero = 0;
unsigned char var_14 = (unsigned char)111;
unsigned int var_15 = 4231694414U;
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
