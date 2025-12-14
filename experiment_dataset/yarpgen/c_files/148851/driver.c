#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21819;
unsigned long long int var_1 = 5342189340634833814ULL;
int var_11 = -2112504864;
int zero = 0;
unsigned long long int var_12 = 7677540200596755710ULL;
signed char var_13 = (signed char)-38;
int var_14 = 87809633;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
