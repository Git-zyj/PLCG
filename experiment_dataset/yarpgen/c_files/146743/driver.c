#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3667613341925691742LL;
signed char var_4 = (signed char)-34;
long long int var_5 = -4644744176038204023LL;
short var_14 = (short)-15613;
int zero = 0;
short var_20 = (short)-13336;
signed char var_21 = (signed char)74;
void init() {
}

void checksum() {
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
