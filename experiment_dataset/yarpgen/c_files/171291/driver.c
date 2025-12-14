#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4499669918697858038LL;
long long int var_6 = 8281817142119010162LL;
long long int var_10 = -2388351720964224686LL;
int zero = 0;
long long int var_11 = -7502747101079113645LL;
signed char var_12 = (signed char)-72;
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
