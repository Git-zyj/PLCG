#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
long long int var_1 = 6589895489542372291LL;
unsigned long long int var_5 = 2634020756183956807ULL;
signed char var_6 = (signed char)-45;
unsigned short var_8 = (unsigned short)21933;
unsigned int var_10 = 699485261U;
int zero = 0;
int var_13 = 561460469;
unsigned short var_14 = (unsigned short)33383;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
