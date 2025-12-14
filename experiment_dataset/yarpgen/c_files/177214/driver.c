#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3980139052129628513LL;
unsigned int var_5 = 756010595U;
short var_10 = (short)25097;
long long int var_11 = 2470116073697483283LL;
unsigned int var_14 = 3325810312U;
int zero = 0;
unsigned char var_16 = (unsigned char)17;
_Bool var_17 = (_Bool)0;
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
