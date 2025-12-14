#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)39;
short var_6 = (short)-25549;
long long int var_11 = 7502284895503231023LL;
int zero = 0;
unsigned char var_12 = (unsigned char)81;
long long int var_13 = -666703223776821887LL;
unsigned int var_14 = 2416771398U;
signed char var_15 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
