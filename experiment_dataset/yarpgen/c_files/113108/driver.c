#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4042515403U;
int var_11 = -489008424;
unsigned long long int var_15 = 11414409362017816660ULL;
int zero = 0;
long long int var_17 = -8211028511506073999LL;
long long int var_18 = 5628761244172816893LL;
unsigned int var_19 = 3216585112U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
