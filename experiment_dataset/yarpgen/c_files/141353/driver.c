#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -443346952290793181LL;
unsigned int var_1 = 3463330551U;
unsigned long long int var_7 = 5507227084111210605ULL;
signed char var_11 = (signed char)-111;
int zero = 0;
unsigned short var_14 = (unsigned short)44160;
unsigned short var_15 = (unsigned short)7822;
void init() {
}

void checksum() {
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
