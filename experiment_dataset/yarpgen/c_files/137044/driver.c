#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2630908023U;
signed char var_7 = (signed char)-44;
int zero = 0;
unsigned long long int var_14 = 15541089935871007458ULL;
unsigned long long int var_15 = 15757891513315388160ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)26;
void init() {
}

void checksum() {
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
