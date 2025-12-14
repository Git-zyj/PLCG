#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3715519815809210263ULL;
short var_1 = (short)-11241;
short var_7 = (short)32203;
unsigned short var_8 = (unsigned short)9226;
int zero = 0;
unsigned int var_12 = 1560229431U;
unsigned int var_13 = 3369998965U;
unsigned short var_14 = (unsigned short)59797;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
