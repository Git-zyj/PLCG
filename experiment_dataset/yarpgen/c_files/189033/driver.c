#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8589424761621991647ULL;
short var_3 = (short)-13811;
unsigned short var_9 = (unsigned short)22007;
int var_10 = -997754716;
int zero = 0;
unsigned int var_11 = 1150153228U;
unsigned short var_12 = (unsigned short)18264;
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
