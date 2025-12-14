#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 459082671389146009ULL;
unsigned long long int var_11 = 3050633550054003851ULL;
int zero = 0;
unsigned long long int var_15 = 12520937927866703581ULL;
unsigned long long int var_16 = 10833326032843232092ULL;
unsigned long long int var_17 = 348089702546063652ULL;
void init() {
}

void checksum() {
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
