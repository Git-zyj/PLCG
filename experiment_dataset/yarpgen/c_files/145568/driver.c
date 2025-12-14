#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17125730929753972300ULL;
unsigned short var_6 = (unsigned short)9103;
int zero = 0;
short var_10 = (short)14628;
unsigned short var_11 = (unsigned short)27866;
unsigned long long int var_12 = 10071605609257165860ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
