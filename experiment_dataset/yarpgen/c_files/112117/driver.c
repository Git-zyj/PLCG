#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
signed char var_2 = (signed char)79;
unsigned long long int var_4 = 7701608023714693002ULL;
signed char var_5 = (signed char)-113;
long long int var_6 = -2085777073668065332LL;
int var_7 = -747761956;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_11 = 1919689029;
int var_12 = 1931114317;
long long int var_13 = -7275685063617814657LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
