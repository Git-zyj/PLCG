#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 514855208;
unsigned int var_8 = 3650510240U;
signed char var_9 = (signed char)-16;
int zero = 0;
short var_15 = (short)-30759;
unsigned long long int var_16 = 12704584501549963461ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
