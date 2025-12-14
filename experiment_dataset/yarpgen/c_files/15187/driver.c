#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned long long int var_3 = 12661317692261292967ULL;
unsigned char var_4 = (unsigned char)38;
long long int var_12 = -1016439971046895069LL;
int zero = 0;
unsigned char var_19 = (unsigned char)50;
int var_20 = 114799739;
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
