#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13821385316072088718ULL;
unsigned int var_3 = 1931444223U;
unsigned long long int var_9 = 8676444443541106781ULL;
int zero = 0;
short var_16 = (short)3135;
signed char var_17 = (signed char)71;
unsigned long long int var_18 = 14193389263952487352ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
