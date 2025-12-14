#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4721839467947985981ULL;
signed char var_1 = (signed char)-19;
unsigned long long int var_2 = 16247712366531568559ULL;
unsigned long long int var_5 = 12784661236730801225ULL;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-6007;
int zero = 0;
signed char var_14 = (signed char)-122;
unsigned long long int var_15 = 3684427444290303240ULL;
long long int var_16 = 4721457415750905899LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
