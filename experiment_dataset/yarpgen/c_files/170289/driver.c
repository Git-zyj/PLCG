#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 848903360U;
signed char var_2 = (signed char)-48;
long long int var_10 = 1970251823803496316LL;
int zero = 0;
unsigned short var_12 = (unsigned short)48620;
unsigned short var_13 = (unsigned short)18009;
void init() {
}

void checksum() {
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
