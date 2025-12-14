#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)195;
unsigned char var_13 = (unsigned char)79;
unsigned short var_18 = (unsigned short)33214;
signed char var_19 = (signed char)46;
int zero = 0;
short var_20 = (short)-19649;
long long int var_21 = -1775496957981180481LL;
unsigned char var_22 = (unsigned char)18;
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
