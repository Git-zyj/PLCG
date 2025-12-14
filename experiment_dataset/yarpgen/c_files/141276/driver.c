#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2552071812108796719LL;
long long int var_3 = 5933371916530707796LL;
long long int var_5 = 2609320432135012135LL;
long long int var_9 = 5000964164838391205LL;
long long int var_10 = -8011455315284814497LL;
long long int var_12 = -7931385780795204805LL;
int zero = 0;
long long int var_13 = -6095178653624918455LL;
long long int var_14 = -5853835788646902180LL;
long long int var_15 = 5640163660649379207LL;
long long int var_16 = 145932902006677778LL;
long long int var_17 = -7647978272007792572LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
