#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-82;
int var_5 = 163480996;
int var_10 = -1233587052;
unsigned long long int var_11 = 15369342349134743738ULL;
int zero = 0;
int var_18 = -632681029;
unsigned long long int var_19 = 5832391400400415247ULL;
long long int var_20 = 1069367438607235421LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
