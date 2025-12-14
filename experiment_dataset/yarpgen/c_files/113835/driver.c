#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 691754911;
unsigned int var_11 = 3476876578U;
int var_14 = -1102985355;
unsigned int var_17 = 3397616227U;
int zero = 0;
int var_19 = -762371975;
unsigned int var_20 = 3346123694U;
void init() {
}

void checksum() {
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
