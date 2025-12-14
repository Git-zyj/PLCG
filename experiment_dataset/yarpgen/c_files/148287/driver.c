#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 295569827;
int var_1 = -1437138213;
unsigned long long int var_8 = 7549925787956980252ULL;
unsigned long long int var_17 = 5291132463610199684ULL;
int zero = 0;
unsigned long long int var_19 = 7184180679657754898ULL;
long long int var_20 = 2283243983919210224LL;
int var_21 = 1823278551;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
