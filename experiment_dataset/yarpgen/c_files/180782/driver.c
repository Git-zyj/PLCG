#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 803942996U;
unsigned long long int var_3 = 1885567385128358023ULL;
unsigned char var_6 = (unsigned char)175;
long long int var_8 = 2137433909165384964LL;
int zero = 0;
long long int var_14 = 1821675474673666621LL;
long long int var_15 = 2604882152111621797LL;
unsigned int var_16 = 2526070495U;
void init() {
}

void checksum() {
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
