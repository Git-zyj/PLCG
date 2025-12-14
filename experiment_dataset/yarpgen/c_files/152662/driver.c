#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7928750816624361243ULL;
int var_3 = 561529158;
unsigned short var_8 = (unsigned short)56086;
int zero = 0;
unsigned long long int var_10 = 13283764201239013054ULL;
unsigned long long int var_11 = 13975586550209075243ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
