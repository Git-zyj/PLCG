#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4072542845162691611LL;
unsigned long long int var_9 = 15994376428247233105ULL;
int zero = 0;
signed char var_11 = (signed char)-14;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2452127408U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
