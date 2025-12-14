#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)150;
long long int var_11 = -4514644943961380156LL;
int zero = 0;
long long int var_12 = 2393699853650518637LL;
int var_13 = -1311248389;
int var_14 = -1928578976;
unsigned short var_15 = (unsigned short)52272;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
