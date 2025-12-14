#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31371;
unsigned long long int var_1 = 3870321206757603553ULL;
unsigned long long int var_3 = 229813762637594259ULL;
unsigned char var_6 = (unsigned char)79;
unsigned int var_9 = 3839753186U;
unsigned long long int var_12 = 10175867136608320150ULL;
int zero = 0;
short var_14 = (short)-4040;
unsigned int var_15 = 503801824U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
