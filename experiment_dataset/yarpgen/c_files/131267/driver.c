#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -522082433;
unsigned int var_8 = 3353575842U;
short var_10 = (short)19641;
int zero = 0;
unsigned short var_17 = (unsigned short)22709;
int var_18 = 527223846;
signed char var_19 = (signed char)26;
int var_20 = 1038457599;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
