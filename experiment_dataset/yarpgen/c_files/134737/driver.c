#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1175100490;
unsigned short var_9 = (unsigned short)47536;
unsigned int var_10 = 3716650487U;
short var_12 = (short)32372;
unsigned long long int var_13 = 7224552628791917639ULL;
int zero = 0;
unsigned int var_16 = 1414922481U;
short var_17 = (short)25707;
unsigned char var_18 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
