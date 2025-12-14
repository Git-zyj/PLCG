#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2379854842U;
int var_8 = 1537941496;
long long int var_14 = -8033969816065195850LL;
int zero = 0;
unsigned long long int var_16 = 18345589190240165ULL;
unsigned int var_17 = 1983515527U;
unsigned long long int var_18 = 13025414627158736646ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
