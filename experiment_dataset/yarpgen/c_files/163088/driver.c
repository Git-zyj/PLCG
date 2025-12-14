#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1779067164167964121ULL;
unsigned long long int var_1 = 9806294971461790759ULL;
unsigned long long int var_7 = 10457863835218317100ULL;
unsigned long long int var_9 = 6863661055603184868ULL;
unsigned int var_11 = 3849093077U;
int zero = 0;
unsigned char var_14 = (unsigned char)253;
int var_15 = 1786465892;
unsigned int var_16 = 2505317005U;
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
