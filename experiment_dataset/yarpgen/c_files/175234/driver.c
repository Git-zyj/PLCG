#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10156532289532524454ULL;
unsigned long long int var_5 = 15453653716000681866ULL;
unsigned long long int var_6 = 7442877608105593472ULL;
unsigned int var_8 = 80784068U;
int zero = 0;
int var_12 = 513255149;
unsigned char var_13 = (unsigned char)193;
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
