#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-59;
unsigned long long int var_10 = 2573261333689581482ULL;
unsigned long long int var_12 = 4740901724820126747ULL;
int var_15 = -1762173066;
int zero = 0;
unsigned long long int var_18 = 1216990124337465496ULL;
int var_19 = 942837308;
unsigned short var_20 = (unsigned short)27794;
int var_21 = -2133405812;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
