#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2274482859U;
signed char var_7 = (signed char)105;
short var_12 = (short)-23640;
unsigned long long int var_15 = 7267882398620596519ULL;
unsigned long long int var_16 = 12047688545193247287ULL;
int zero = 0;
signed char var_18 = (signed char)68;
unsigned long long int var_19 = 18184912745348918546ULL;
long long int var_20 = 7995773924064904348LL;
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
