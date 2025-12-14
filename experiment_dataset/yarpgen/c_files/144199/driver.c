#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1501770883;
short var_4 = (short)13706;
unsigned int var_10 = 976856466U;
short var_15 = (short)8288;
short var_16 = (short)-2170;
int zero = 0;
signed char var_18 = (signed char)-114;
unsigned int var_19 = 990414552U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
