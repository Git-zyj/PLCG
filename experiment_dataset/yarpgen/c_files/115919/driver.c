#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29739;
long long int var_4 = -4303359225089999742LL;
unsigned long long int var_13 = 9401756305333749305ULL;
int zero = 0;
long long int var_18 = -5507099513924384637LL;
long long int var_19 = 2074620740124906589LL;
void init() {
}

void checksum() {
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
