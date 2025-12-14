#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22255;
unsigned long long int var_4 = 6332136863027092731ULL;
_Bool var_5 = (_Bool)0;
long long int var_8 = -7295558062184153595LL;
short var_17 = (short)-7918;
unsigned long long int var_19 = 9924133352185927260ULL;
int zero = 0;
unsigned long long int var_20 = 7965610269082149024ULL;
long long int var_21 = 7094983159233099793LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
