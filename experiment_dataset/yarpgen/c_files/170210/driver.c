#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)40;
signed char var_4 = (signed char)35;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 9211260416289141980ULL;
unsigned long long int var_14 = 11075377003938385600ULL;
void init() {
}

void checksum() {
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
