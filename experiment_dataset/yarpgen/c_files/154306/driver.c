#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
short var_2 = (short)19651;
short var_4 = (short)6460;
int var_6 = 1402250014;
unsigned long long int var_8 = 6950346327157446957ULL;
unsigned long long int var_11 = 5119646487312664166ULL;
int zero = 0;
long long int var_15 = -1929003570197718412LL;
unsigned long long int var_16 = 6506585004156358981ULL;
void init() {
}

void checksum() {
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
