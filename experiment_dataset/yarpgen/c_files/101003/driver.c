#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4009740688434469248LL;
unsigned char var_5 = (unsigned char)126;
short var_8 = (short)11735;
short var_15 = (short)-8265;
int zero = 0;
short var_19 = (short)10206;
unsigned long long int var_20 = 13342630775824964715ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
