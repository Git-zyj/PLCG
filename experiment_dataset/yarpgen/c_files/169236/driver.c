#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3907065999U;
unsigned char var_6 = (unsigned char)150;
signed char var_7 = (signed char)9;
short var_10 = (short)9132;
unsigned long long int var_12 = 15790621722207570784ULL;
signed char var_13 = (signed char)116;
unsigned int var_14 = 540730713U;
int zero = 0;
unsigned short var_18 = (unsigned short)10595;
unsigned short var_19 = (unsigned short)47444;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
