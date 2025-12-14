#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22020;
unsigned long long int var_7 = 14226438794227599865ULL;
unsigned int var_9 = 2433129650U;
unsigned char var_10 = (unsigned char)170;
unsigned long long int var_12 = 8883719276274104484ULL;
int zero = 0;
long long int var_13 = 6718610231343238918LL;
int var_14 = -1018572309;
void init() {
}

void checksum() {
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
