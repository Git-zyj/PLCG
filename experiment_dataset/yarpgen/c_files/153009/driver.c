#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
long long int var_3 = 7531652762362162279LL;
long long int var_9 = -2337267003579319991LL;
int zero = 0;
unsigned long long int var_13 = 7356650094334289973ULL;
long long int var_14 = 644606872780894473LL;
void init() {
}

void checksum() {
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
