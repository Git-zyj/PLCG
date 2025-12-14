#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9221456874289826856LL;
unsigned long long int var_8 = 6500659749523159899ULL;
signed char var_12 = (signed char)-36;
int zero = 0;
unsigned long long int var_14 = 2895342670341240602ULL;
unsigned short var_15 = (unsigned short)51319;
int var_16 = -1447974295;
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
