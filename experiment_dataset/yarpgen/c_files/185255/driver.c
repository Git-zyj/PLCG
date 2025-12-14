#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1063102007882182030LL;
unsigned int var_6 = 1967110701U;
int var_10 = -79050598;
unsigned int var_12 = 2736314997U;
int zero = 0;
signed char var_14 = (signed char)-114;
signed char var_15 = (signed char)-23;
unsigned short var_16 = (unsigned short)26003;
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
