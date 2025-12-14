#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)33810;
short var_12 = (short)-17611;
long long int var_14 = -6051083345876621156LL;
int zero = 0;
unsigned char var_20 = (unsigned char)164;
short var_21 = (short)-1258;
long long int var_22 = -6597079436351508955LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
