#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)173;
unsigned char var_4 = (unsigned char)224;
long long int var_7 = -627907361397477592LL;
short var_9 = (short)-26170;
int zero = 0;
unsigned int var_16 = 905888929U;
unsigned char var_17 = (unsigned char)132;
short var_18 = (short)-16461;
unsigned char var_19 = (unsigned char)198;
unsigned long long int var_20 = 18095833499292697424ULL;
long long int var_21 = -3858493273010489667LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
