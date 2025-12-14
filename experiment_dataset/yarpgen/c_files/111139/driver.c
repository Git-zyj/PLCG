#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5260326645876959486LL;
unsigned short var_2 = (unsigned short)37827;
signed char var_5 = (signed char)-112;
int zero = 0;
int var_13 = 1429631273;
signed char var_14 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
