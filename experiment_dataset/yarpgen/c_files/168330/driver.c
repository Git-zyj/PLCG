#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -791813251661979086LL;
long long int var_4 = -2203845137502641627LL;
unsigned long long int var_8 = 14870325375886626384ULL;
long long int var_15 = -4223064709072918948LL;
int zero = 0;
long long int var_17 = 5090885549007302770LL;
signed char var_18 = (signed char)-16;
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
