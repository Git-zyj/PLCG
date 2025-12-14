#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1588576433;
int var_4 = -819530736;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 17908339079852252279ULL;
_Bool var_13 = (_Bool)1;
int var_14 = 2039651344;
unsigned int var_15 = 2554073103U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
