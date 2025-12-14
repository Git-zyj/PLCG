#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)111;
unsigned short var_14 = (unsigned short)30468;
signed char var_17 = (signed char)-44;
int zero = 0;
unsigned long long int var_20 = 11498369086962906456ULL;
unsigned short var_21 = (unsigned short)2295;
unsigned int var_22 = 3861974667U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
