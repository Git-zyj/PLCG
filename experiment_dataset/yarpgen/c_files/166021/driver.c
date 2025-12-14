#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)21;
unsigned char var_10 = (unsigned char)159;
int zero = 0;
short var_12 = (short)25876;
long long int var_13 = 2604702056469008163LL;
unsigned int var_14 = 3501926998U;
short var_15 = (short)-7613;
unsigned int var_16 = 488669255U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
