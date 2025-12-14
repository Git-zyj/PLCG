#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6249568974064611581ULL;
long long int var_2 = 3653600813238611944LL;
short var_5 = (short)-28375;
int var_9 = 2116433110;
int zero = 0;
signed char var_11 = (signed char)-31;
short var_12 = (short)-14190;
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
