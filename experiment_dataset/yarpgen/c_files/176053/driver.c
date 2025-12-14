#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8718927727936346017LL;
unsigned long long int var_1 = 4060785385921292648ULL;
int var_3 = -64044828;
signed char var_4 = (signed char)18;
signed char var_7 = (signed char)69;
int zero = 0;
signed char var_11 = (signed char)63;
unsigned long long int var_12 = 14849254352722291488ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
