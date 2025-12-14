#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)10647;
unsigned int var_7 = 3480921008U;
short var_8 = (short)21011;
unsigned short var_11 = (unsigned short)12110;
int zero = 0;
int var_14 = 1927872475;
unsigned char var_15 = (unsigned char)216;
short var_16 = (short)23076;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
