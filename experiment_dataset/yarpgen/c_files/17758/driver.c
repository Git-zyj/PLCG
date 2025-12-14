#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16204485670571832522ULL;
unsigned short var_3 = (unsigned short)22215;
unsigned long long int var_5 = 574450228189930681ULL;
unsigned int var_6 = 600308218U;
unsigned short var_15 = (unsigned short)5507;
int zero = 0;
unsigned short var_16 = (unsigned short)14236;
short var_17 = (short)29682;
void init() {
}

void checksum() {
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
