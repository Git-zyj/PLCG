#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6784440093538880582ULL;
long long int var_3 = -4969195287210081308LL;
long long int var_4 = 2914791600193295939LL;
int zero = 0;
long long int var_12 = 8869337942118694275LL;
signed char var_13 = (signed char)-12;
long long int var_14 = 4639797914401853394LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
