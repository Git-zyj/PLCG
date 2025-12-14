#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)100;
unsigned long long int var_6 = 16405511404367508184ULL;
unsigned char var_8 = (unsigned char)93;
unsigned char var_9 = (unsigned char)183;
int zero = 0;
unsigned long long int var_14 = 16404339138544865318ULL;
unsigned long long int var_15 = 9120397924112018772ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
