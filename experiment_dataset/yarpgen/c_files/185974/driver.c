#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
unsigned long long int var_4 = 16102857662019258622ULL;
unsigned int var_5 = 3464110058U;
int zero = 0;
long long int var_14 = -8235889775442760443LL;
long long int var_15 = -2751507769518075193LL;
int var_16 = 1828550414;
void init() {
}

void checksum() {
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
