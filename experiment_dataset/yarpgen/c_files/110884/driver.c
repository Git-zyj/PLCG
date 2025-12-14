#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6597968031419549302ULL;
unsigned short var_11 = (unsigned short)61772;
int var_16 = -1113733700;
int zero = 0;
long long int var_17 = -5432576318506236776LL;
unsigned int var_18 = 302935860U;
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
