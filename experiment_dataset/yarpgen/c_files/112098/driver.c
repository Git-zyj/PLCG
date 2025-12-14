#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -972182905;
unsigned long long int var_6 = 14507440532584725164ULL;
unsigned long long int var_9 = 9763018353338872855ULL;
signed char var_12 = (signed char)49;
int zero = 0;
unsigned long long int var_15 = 11974834288938644911ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
