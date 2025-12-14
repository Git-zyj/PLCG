#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4063475322U;
long long int var_10 = -5264124004643452113LL;
unsigned long long int var_13 = 1569172549696990567ULL;
int zero = 0;
int var_14 = 1148660555;
short var_15 = (short)-4541;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
