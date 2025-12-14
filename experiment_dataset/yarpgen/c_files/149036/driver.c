#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9938160210919325000ULL;
unsigned long long int var_2 = 4594291557480500611ULL;
short var_8 = (short)27362;
int var_9 = 1411796167;
int zero = 0;
signed char var_11 = (signed char)40;
unsigned long long int var_12 = 3805159991973200739ULL;
unsigned long long int var_13 = 14623142281613116674ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
