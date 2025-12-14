#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = -741204683;
unsigned long long int var_13 = 4360649194314379812ULL;
unsigned int var_15 = 3829528405U;
short var_16 = (short)-17072;
int zero = 0;
unsigned long long int var_18 = 2629982501982104647ULL;
unsigned long long int var_19 = 11502665528624269468ULL;
void init() {
}

void checksum() {
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
