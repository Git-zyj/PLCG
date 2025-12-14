#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-66;
signed char var_10 = (signed char)79;
long long int var_19 = 5558471079342484717LL;
int zero = 0;
unsigned long long int var_20 = 16117042243796486751ULL;
signed char var_21 = (signed char)-7;
signed char var_22 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
