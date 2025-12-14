#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
long long int var_3 = 6268811651490651540LL;
unsigned long long int var_4 = 6084415914880115532ULL;
int zero = 0;
unsigned long long int var_14 = 12419598339041491707ULL;
signed char var_15 = (signed char)-126;
signed char var_16 = (signed char)7;
short var_17 = (short)-9800;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
