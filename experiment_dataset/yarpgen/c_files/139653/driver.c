#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 695921590U;
unsigned int var_8 = 3953870549U;
int zero = 0;
int var_11 = 371707848;
signed char var_12 = (signed char)100;
unsigned long long int var_13 = 13020516973012456043ULL;
signed char var_14 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
