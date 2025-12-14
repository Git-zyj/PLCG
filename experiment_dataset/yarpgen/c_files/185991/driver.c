#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13050330886480062784ULL;
unsigned long long int var_8 = 535533031997109487ULL;
long long int var_10 = 8101666076151958163LL;
signed char var_11 = (signed char)121;
int zero = 0;
signed char var_19 = (signed char)38;
unsigned int var_20 = 3338022239U;
long long int var_21 = 3301832951979021824LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
