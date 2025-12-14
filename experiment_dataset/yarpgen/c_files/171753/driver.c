#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
unsigned int var_2 = 4099621131U;
long long int var_5 = -8279146522994948903LL;
unsigned long long int var_6 = 2265653559906418543ULL;
int zero = 0;
signed char var_11 = (signed char)-22;
long long int var_12 = -3860129158866037310LL;
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
