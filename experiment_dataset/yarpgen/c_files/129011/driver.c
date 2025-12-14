#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)23202;
unsigned char var_8 = (unsigned char)79;
unsigned char var_9 = (unsigned char)174;
int var_11 = 406183758;
int zero = 0;
int var_12 = 1752564753;
unsigned char var_13 = (unsigned char)139;
short var_14 = (short)17061;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
