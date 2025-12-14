#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -708278317;
signed char var_2 = (signed char)-51;
unsigned short var_7 = (unsigned short)36628;
int zero = 0;
unsigned short var_10 = (unsigned short)6694;
int var_11 = 1074788133;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
