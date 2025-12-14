#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 47123489U;
unsigned int var_6 = 656958486U;
long long int var_8 = -3271825421914828500LL;
long long int var_15 = -8070623738079988938LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2849689937U;
void init() {
}

void checksum() {
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
