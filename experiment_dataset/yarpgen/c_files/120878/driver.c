#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 409018126508800520LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 6148021079151918829ULL;
unsigned long long int var_5 = 11075809069911770519ULL;
unsigned long long int var_7 = 1642158679733450823ULL;
int zero = 0;
short var_10 = (short)-32122;
short var_11 = (short)28723;
unsigned int var_12 = 4184472133U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
