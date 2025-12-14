#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6346083165225595494LL;
unsigned long long int var_16 = 3020730747767402853ULL;
int zero = 0;
unsigned int var_18 = 3142486492U;
long long int var_19 = -7035986083087356012LL;
int var_20 = -699218716;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
