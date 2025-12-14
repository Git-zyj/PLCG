#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3872754351999289185ULL;
unsigned long long int var_7 = 13022805219483753566ULL;
unsigned long long int var_10 = 568978258165969383ULL;
int zero = 0;
long long int var_15 = 4051476142552821910LL;
unsigned int var_16 = 70425284U;
unsigned short var_17 = (unsigned short)64058;
signed char var_18 = (signed char)-57;
short var_19 = (short)-19375;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
