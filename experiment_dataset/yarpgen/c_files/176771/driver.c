#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-86;
unsigned int var_11 = 1779880199U;
int var_13 = -1359253027;
int var_15 = 559740336;
int zero = 0;
unsigned short var_17 = (unsigned short)26066;
unsigned long long int var_18 = 16564110634744373333ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
