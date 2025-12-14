#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49922;
unsigned long long int var_9 = 13543390810207278346ULL;
unsigned long long int var_11 = 17312483300550593709ULL;
signed char var_14 = (signed char)-84;
int zero = 0;
unsigned short var_17 = (unsigned short)58676;
int var_18 = 1866019857;
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
