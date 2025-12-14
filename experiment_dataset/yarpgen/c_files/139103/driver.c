#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 585447265330196326LL;
unsigned long long int var_2 = 6087840994386159022ULL;
signed char var_7 = (signed char)-85;
signed char var_8 = (signed char)86;
int var_10 = -1755233629;
int var_11 = 358606224;
int zero = 0;
long long int var_12 = -6418835647741570350LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
