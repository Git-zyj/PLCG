#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_14 = (signed char)16;
unsigned long long int var_16 = 16333657825440212548ULL;
unsigned long long int var_17 = 988519266041054790ULL;
int zero = 0;
short var_19 = (short)12905;
unsigned long long int var_20 = 4016472124226270436ULL;
void init() {
}

void checksum() {
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
