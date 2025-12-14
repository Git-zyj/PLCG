#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14128940363253299519ULL;
short var_1 = (short)-22557;
long long int var_2 = 6125999928915375882LL;
short var_7 = (short)9702;
signed char var_11 = (signed char)103;
int zero = 0;
long long int var_15 = 1408673921175429291LL;
unsigned short var_16 = (unsigned short)56998;
signed char var_17 = (signed char)-77;
void init() {
}

void checksum() {
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
