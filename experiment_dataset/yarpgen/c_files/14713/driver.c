#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1584136912U;
unsigned short var_6 = (unsigned short)16354;
int zero = 0;
unsigned int var_12 = 3057123522U;
signed char var_13 = (signed char)79;
unsigned int var_14 = 999758811U;
signed char var_15 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
