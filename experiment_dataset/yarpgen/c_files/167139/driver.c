#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_11 = (signed char)-71;
unsigned long long int var_12 = 6585400554837233181ULL;
int zero = 0;
signed char var_16 = (signed char)94;
signed char var_17 = (signed char)86;
unsigned long long int var_18 = 15310799347575964044ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
