#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23172;
short var_6 = (short)-17964;
unsigned short var_7 = (unsigned short)31211;
unsigned short var_13 = (unsigned short)22384;
short var_16 = (short)18024;
int zero = 0;
unsigned short var_19 = (unsigned short)36961;
unsigned short var_20 = (unsigned short)43634;
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
