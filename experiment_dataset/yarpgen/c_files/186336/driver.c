#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-105;
int var_4 = 870475465;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)34611;
int zero = 0;
int var_10 = 396988852;
unsigned long long int var_11 = 13196751149699837353ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
