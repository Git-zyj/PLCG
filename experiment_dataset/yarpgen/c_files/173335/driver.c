#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)85;
signed char var_4 = (signed char)-47;
signed char var_11 = (signed char)74;
unsigned long long int var_15 = 8761315669628286179ULL;
signed char var_16 = (signed char)-97;
int zero = 0;
unsigned long long int var_17 = 12582741578580324740ULL;
signed char var_18 = (signed char)-124;
void init() {
}

void checksum() {
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
