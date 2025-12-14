#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1259166352;
unsigned long long int var_1 = 9288970091407412727ULL;
unsigned int var_3 = 402982571U;
int zero = 0;
unsigned short var_13 = (unsigned short)21318;
unsigned long long int var_14 = 16193116694113231184ULL;
signed char var_15 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
