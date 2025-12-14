#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 60108570;
signed char var_2 = (signed char)47;
unsigned short var_3 = (unsigned short)48761;
unsigned long long int var_7 = 16564351714467956264ULL;
unsigned int var_12 = 1577472115U;
long long int var_17 = -1802318548499639330LL;
signed char var_18 = (signed char)-21;
int zero = 0;
int var_19 = -307289033;
int var_20 = -943247761;
unsigned short var_21 = (unsigned short)58687;
signed char var_22 = (signed char)-63;
long long int var_23 = 7572067163312541408LL;
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
