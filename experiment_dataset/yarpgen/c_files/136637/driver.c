#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)35103;
unsigned long long int var_14 = 4930712895952289051ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 4244755003834215687ULL;
short var_21 = (short)1947;
unsigned int var_22 = 1512631717U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
