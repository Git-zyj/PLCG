#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = -7029295332807197453LL;
long long int var_17 = -5053176974390320933LL;
int zero = 0;
long long int var_19 = -6683446140747652723LL;
long long int var_20 = 2556353735206813436LL;
long long int var_21 = 1903645465183585779LL;
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
