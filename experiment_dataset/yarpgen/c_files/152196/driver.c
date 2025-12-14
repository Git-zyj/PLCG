#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2000602438;
int var_3 = 1368783225;
unsigned int var_4 = 1333130993U;
int var_9 = -1848107671;
unsigned char var_12 = (unsigned char)117;
int zero = 0;
short var_14 = (short)11167;
int var_15 = 1392070786;
unsigned short var_16 = (unsigned short)41585;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
