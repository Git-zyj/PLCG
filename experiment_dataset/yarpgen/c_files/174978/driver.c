#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -8635766096387383229LL;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 2575499998U;
unsigned int var_14 = 2478491169U;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-5364;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
