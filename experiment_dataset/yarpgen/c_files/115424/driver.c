#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)62;
short var_5 = (short)32121;
long long int var_8 = 1784978659601952244LL;
int zero = 0;
short var_13 = (short)-4992;
unsigned char var_14 = (unsigned char)4;
unsigned long long int var_15 = 2271549772463093590ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
