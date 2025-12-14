#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5448234427314178297LL;
signed char var_3 = (signed char)127;
unsigned int var_5 = 2505562206U;
unsigned char var_6 = (unsigned char)73;
long long int var_10 = -7408133294933885902LL;
unsigned short var_11 = (unsigned short)4502;
long long int var_12 = 7325679657321559853LL;
unsigned char var_14 = (unsigned char)37;
int zero = 0;
short var_15 = (short)25140;
unsigned int var_16 = 751644466U;
long long int var_17 = 2571044339853473197LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
