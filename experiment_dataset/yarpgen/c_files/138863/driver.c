#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1876242001;
short var_2 = (short)-17004;
int var_9 = 990656774;
int var_12 = 1049162519;
signed char var_13 = (signed char)-111;
int zero = 0;
unsigned int var_17 = 920226682U;
int var_18 = -435244033;
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
