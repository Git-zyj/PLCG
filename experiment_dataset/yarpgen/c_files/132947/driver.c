#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
long long int var_2 = 8109395380982426458LL;
unsigned long long int var_4 = 3723513276008095658ULL;
unsigned char var_8 = (unsigned char)4;
unsigned long long int var_9 = 5051648117582300046ULL;
signed char var_10 = (signed char)88;
signed char var_11 = (signed char)-76;
int zero = 0;
unsigned long long int var_14 = 2497987300653571892ULL;
unsigned int var_15 = 1882600982U;
unsigned long long int var_16 = 15813415387698592458ULL;
int var_17 = -1680903860;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
