#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)71;
short var_5 = (short)-23629;
int var_7 = 563742509;
short var_9 = (short)-13034;
unsigned char var_10 = (unsigned char)42;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
short var_13 = (short)-18764;
unsigned long long int var_14 = 17786163190927627148ULL;
unsigned char var_15 = (unsigned char)37;
int var_16 = -1163049760;
int var_17 = -1943439196;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
