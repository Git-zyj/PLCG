#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2280336795U;
unsigned long long int var_6 = 11371709518096839753ULL;
signed char var_7 = (signed char)-23;
int zero = 0;
long long int var_10 = 3972513708760508787LL;
signed char var_11 = (signed char)45;
unsigned long long int var_12 = 6478390326327771856ULL;
short var_13 = (short)3800;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
