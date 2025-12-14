#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1625993124;
unsigned short var_19 = (unsigned short)932;
int zero = 0;
int var_20 = -1872688259;
unsigned char var_21 = (unsigned char)187;
unsigned char var_22 = (unsigned char)222;
unsigned short var_23 = (unsigned short)56280;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
