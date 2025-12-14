#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5129399723513831015LL;
unsigned long long int var_1 = 16111686095442658116ULL;
signed char var_4 = (signed char)-125;
int var_16 = -1872187771;
int zero = 0;
long long int var_17 = -6280454600443799705LL;
int var_18 = -275365401;
short var_19 = (short)-17280;
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
