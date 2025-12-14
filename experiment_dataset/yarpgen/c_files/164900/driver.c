#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14168879758786765369ULL;
unsigned long long int var_12 = 16724459309188347867ULL;
int zero = 0;
unsigned long long int var_18 = 6367287743777718422ULL;
unsigned long long int var_19 = 8333321740359440760ULL;
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
