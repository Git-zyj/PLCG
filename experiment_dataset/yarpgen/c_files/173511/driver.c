#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22245;
signed char var_5 = (signed char)-106;
int zero = 0;
unsigned long long int var_14 = 17429298533888971454ULL;
long long int var_15 = -888422781597146301LL;
unsigned long long int var_16 = 16402319398034870397ULL;
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
