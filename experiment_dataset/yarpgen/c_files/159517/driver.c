#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11964052186830442330ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 4078325547U;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 13204130960342781302ULL;
void init() {
}

void checksum() {
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
