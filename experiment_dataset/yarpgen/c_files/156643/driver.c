#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1482892916765325914LL;
long long int var_2 = -7495977886073916455LL;
unsigned int var_5 = 1299472593U;
unsigned long long int var_9 = 17366858556739434406ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)103;
signed char var_20 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
