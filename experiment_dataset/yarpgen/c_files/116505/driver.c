#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1559831791;
unsigned long long int var_5 = 4758047912979242166ULL;
int zero = 0;
signed char var_13 = (signed char)2;
unsigned long long int var_14 = 12409547442271614632ULL;
unsigned long long int var_15 = 7354419349986941320ULL;
void init() {
}

void checksum() {
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
