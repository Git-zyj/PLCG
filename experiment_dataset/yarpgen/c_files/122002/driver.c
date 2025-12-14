#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-37;
long long int var_4 = 2689310469024675944LL;
int var_5 = 442199283;
int var_10 = 1579198544;
int zero = 0;
unsigned long long int var_14 = 12346101964101738941ULL;
unsigned int var_15 = 41416397U;
unsigned short var_16 = (unsigned short)51401;
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
