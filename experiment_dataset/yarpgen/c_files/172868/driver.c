#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1976931600;
long long int var_13 = 1471475339754000601LL;
long long int var_16 = -6016661876748982300LL;
unsigned short var_18 = (unsigned short)15231;
int zero = 0;
unsigned long long int var_19 = 3262685320912937657ULL;
unsigned int var_20 = 4026059547U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
