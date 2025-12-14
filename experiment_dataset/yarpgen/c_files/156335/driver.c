#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5400501975562239364LL;
long long int var_5 = 3291779850412121798LL;
_Bool var_7 = (_Bool)0;
long long int var_9 = 6988122759797965487LL;
int zero = 0;
unsigned long long int var_11 = 10784579673657946739ULL;
long long int var_12 = 4619155811912747318LL;
void init() {
}

void checksum() {
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
