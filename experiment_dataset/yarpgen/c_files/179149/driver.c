#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1483857938;
unsigned short var_5 = (unsigned short)19748;
signed char var_7 = (signed char)-110;
int zero = 0;
signed char var_13 = (signed char)72;
unsigned long long int var_14 = 6894718273436054393ULL;
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
