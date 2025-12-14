#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
long long int var_3 = 8290370765456957943LL;
unsigned long long int var_4 = 16381798502105864391ULL;
unsigned short var_6 = (unsigned short)41455;
signed char var_10 = (signed char)118;
int zero = 0;
unsigned int var_11 = 1078673893U;
unsigned long long int var_12 = 1517796630007095676ULL;
long long int var_13 = 3782986209368605129LL;
unsigned int var_14 = 1004474972U;
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
