#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 797600620U;
unsigned long long int var_3 = 13438479534661057524ULL;
long long int var_4 = 3469095520862600908LL;
unsigned char var_8 = (unsigned char)26;
unsigned short var_13 = (unsigned short)543;
int zero = 0;
int var_17 = 578387750;
unsigned short var_18 = (unsigned short)26076;
unsigned long long int var_19 = 15877703401993824759ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
