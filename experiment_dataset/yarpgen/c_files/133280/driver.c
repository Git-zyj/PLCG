#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1061417575026914476LL;
long long int var_10 = -7131833847385758469LL;
long long int var_12 = -6241149460424716063LL;
int zero = 0;
long long int var_13 = -2452639592081718527LL;
long long int var_14 = -4769694068641034995LL;
long long int var_15 = -4590318253139142494LL;
long long int var_16 = 7464841642019400694LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
