#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4602;
long long int var_3 = 6572683881855471559LL;
int var_4 = 612148796;
short var_5 = (short)1242;
signed char var_7 = (signed char)-60;
unsigned long long int var_8 = 6719467117561407677ULL;
unsigned short var_9 = (unsigned short)35717;
unsigned char var_11 = (unsigned char)116;
unsigned int var_12 = 3264052351U;
int zero = 0;
long long int var_14 = 6691735226740797192LL;
unsigned long long int var_15 = 17071442872748981418ULL;
short var_16 = (short)-9360;
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
