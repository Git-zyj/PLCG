#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11636;
unsigned long long int var_14 = 8491460412602966896ULL;
int zero = 0;
unsigned long long int var_17 = 13607543064460734612ULL;
int var_18 = -2116908096;
unsigned long long int var_19 = 10698016629891285309ULL;
signed char var_20 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
