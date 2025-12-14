#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 168335358838368938ULL;
unsigned int var_2 = 4103285920U;
int var_4 = 453659202;
unsigned long long int var_6 = 7404797556576115059ULL;
signed char var_7 = (signed char)25;
unsigned short var_8 = (unsigned short)18621;
int zero = 0;
unsigned int var_11 = 2877617876U;
unsigned long long int var_12 = 12018823099274130200ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
