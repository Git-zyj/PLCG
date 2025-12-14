#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10319022321118414388ULL;
int var_5 = 2056934852;
unsigned long long int var_8 = 882144632814511682ULL;
signed char var_9 = (signed char)41;
unsigned long long int var_11 = 17291866785407297370ULL;
signed char var_13 = (signed char)-127;
unsigned long long int var_15 = 7759644822724839176ULL;
signed char var_17 = (signed char)108;
int zero = 0;
int var_19 = 1342389921;
signed char var_20 = (signed char)-92;
unsigned long long int var_21 = 16362518342446687322ULL;
void init() {
}

void checksum() {
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
