#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15181248763810558870ULL;
short var_6 = (short)-18938;
unsigned int var_9 = 393298911U;
int zero = 0;
unsigned int var_10 = 2935035157U;
unsigned int var_11 = 2595998776U;
signed char var_12 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
