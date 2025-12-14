#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8487880992318929189LL;
signed char var_2 = (signed char)-63;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_6 = -2000832178584024677LL;
signed char var_9 = (signed char)49;
int zero = 0;
unsigned long long int var_11 = 3414458088422152794ULL;
signed char var_12 = (signed char)22;
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
