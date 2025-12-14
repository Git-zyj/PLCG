#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14719880129845689626ULL;
short var_2 = (short)-15232;
unsigned char var_5 = (unsigned char)9;
unsigned char var_9 = (unsigned char)170;
unsigned char var_12 = (unsigned char)155;
short var_13 = (short)26478;
unsigned long long int var_14 = 7331962739897293015ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)4768;
unsigned long long int var_16 = 3862481022816417990ULL;
int var_17 = 1002092054;
short var_18 = (short)30975;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
