#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)15871;
unsigned long long int var_10 = 7996013407951253684ULL;
unsigned int var_13 = 3723820189U;
int zero = 0;
signed char var_17 = (signed char)123;
unsigned short var_18 = (unsigned short)26414;
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
