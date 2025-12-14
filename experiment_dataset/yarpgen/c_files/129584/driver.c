#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13842;
short var_3 = (short)9807;
unsigned long long int var_6 = 3669918138187926445ULL;
int zero = 0;
short var_13 = (short)-32078;
unsigned long long int var_14 = 6204648328626021550ULL;
signed char var_15 = (signed char)107;
unsigned short var_16 = (unsigned short)26064;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
