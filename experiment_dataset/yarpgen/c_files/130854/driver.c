#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)7;
unsigned short var_6 = (unsigned short)43270;
unsigned long long int var_11 = 17067404852983219496ULL;
int var_15 = -1771806877;
short var_16 = (short)15135;
unsigned int var_17 = 2322224357U;
int zero = 0;
short var_20 = (short)18896;
unsigned int var_21 = 3150858097U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
