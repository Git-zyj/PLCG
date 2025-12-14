#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12466;
unsigned char var_1 = (unsigned char)120;
int var_2 = 1290898613;
unsigned long long int var_3 = 8954569112328800819ULL;
unsigned int var_4 = 996227796U;
unsigned long long int var_6 = 6286686084251749317ULL;
unsigned char var_9 = (unsigned char)228;
unsigned short var_10 = (unsigned short)47848;
int var_11 = -777038470;
int zero = 0;
long long int var_13 = 6461189913548335069LL;
unsigned char var_14 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
