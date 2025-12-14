#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18277;
int var_5 = 1828615946;
unsigned char var_6 = (unsigned char)212;
unsigned char var_7 = (unsigned char)38;
long long int var_8 = 798594144727869356LL;
int zero = 0;
int var_13 = -226201246;
short var_14 = (short)-31212;
short var_15 = (short)-7401;
void init() {
}

void checksum() {
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
