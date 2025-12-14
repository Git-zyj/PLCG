#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4450586143125150439ULL;
int var_6 = -859118313;
int zero = 0;
unsigned long long int var_12 = 6495372040444749733ULL;
long long int var_13 = -652976096388754303LL;
unsigned long long int var_14 = 11608959509984129747ULL;
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
