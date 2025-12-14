#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
unsigned int var_3 = 2245838171U;
long long int var_13 = -719458256832111056LL;
signed char var_14 = (signed char)68;
int var_15 = 1269524574;
int zero = 0;
unsigned long long int var_16 = 4603299631313504695ULL;
signed char var_17 = (signed char)76;
unsigned short var_18 = (unsigned short)59831;
unsigned int var_19 = 3697093861U;
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
