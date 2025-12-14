#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4081161061414251083LL;
_Bool var_7 = (_Bool)1;
short var_9 = (short)15117;
long long int var_10 = -16579039402035118LL;
long long int var_14 = -6414846249235261976LL;
int zero = 0;
int var_19 = 2145497912;
unsigned int var_20 = 668060038U;
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
