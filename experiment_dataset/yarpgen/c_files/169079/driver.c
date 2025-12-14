#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
unsigned int var_6 = 440569813U;
int var_7 = -2048183035;
unsigned short var_8 = (unsigned short)6561;
unsigned long long int var_9 = 11523413540582854164ULL;
signed char var_11 = (signed char)103;
int zero = 0;
unsigned long long int var_12 = 9487799809721565022ULL;
unsigned long long int var_13 = 14209949438581556893ULL;
unsigned int var_14 = 3137192054U;
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
