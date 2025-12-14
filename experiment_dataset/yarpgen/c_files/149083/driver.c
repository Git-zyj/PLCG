#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27276;
unsigned short var_4 = (unsigned short)9385;
unsigned int var_5 = 947264397U;
int var_6 = -253425940;
unsigned int var_10 = 3369390334U;
signed char var_12 = (signed char)-111;
int zero = 0;
unsigned short var_14 = (unsigned short)46072;
unsigned short var_15 = (unsigned short)53838;
unsigned char var_16 = (unsigned char)21;
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
