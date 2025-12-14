#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25898;
int var_4 = 905645529;
unsigned char var_7 = (unsigned char)199;
signed char var_12 = (signed char)-14;
unsigned long long int var_13 = 1683300980683575329ULL;
unsigned long long int var_14 = 10633853112623478177ULL;
int var_15 = -1501348400;
int zero = 0;
int var_18 = 186093325;
unsigned char var_19 = (unsigned char)239;
signed char var_20 = (signed char)68;
short var_21 = (short)2804;
unsigned long long int var_22 = 2630951614460895689ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
