#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)6447;
long long int var_15 = -6877620442123725316LL;
int zero = 0;
unsigned long long int var_18 = 18061150898566295413ULL;
long long int var_19 = -8479465770222765636LL;
signed char var_20 = (signed char)-58;
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
