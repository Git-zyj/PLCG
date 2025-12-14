#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)208;
unsigned long long int var_5 = 13663795296227935736ULL;
unsigned short var_9 = (unsigned short)2896;
unsigned short var_10 = (unsigned short)65136;
int zero = 0;
long long int var_13 = -773634318836408876LL;
int var_14 = 1749743003;
int var_15 = 1834558567;
long long int var_16 = -4036343891216556721LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
