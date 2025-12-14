#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)15535;
unsigned long long int var_11 = 7963130782438646614ULL;
unsigned long long int var_14 = 14635760633205483846ULL;
int zero = 0;
signed char var_20 = (signed char)56;
unsigned long long int var_21 = 12034794521369645910ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
