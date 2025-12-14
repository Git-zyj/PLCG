#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 891180146792102530ULL;
signed char var_8 = (signed char)73;
unsigned long long int var_12 = 13899990155081409719ULL;
signed char var_17 = (signed char)13;
int zero = 0;
signed char var_19 = (signed char)121;
signed char var_20 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
