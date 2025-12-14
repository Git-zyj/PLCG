#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2003134176U;
unsigned long long int var_5 = 11997749136544578351ULL;
unsigned int var_7 = 1511006948U;
unsigned long long int var_14 = 7571667436883107548ULL;
short var_16 = (short)3789;
int zero = 0;
signed char var_19 = (signed char)9;
int var_20 = 1526700411;
unsigned long long int var_21 = 10935210414607161369ULL;
short var_22 = (short)-12454;
unsigned char var_23 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
