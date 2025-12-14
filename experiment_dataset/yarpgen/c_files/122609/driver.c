#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 10668785690517599008ULL;
int var_13 = -987012430;
int zero = 0;
signed char var_14 = (signed char)-119;
unsigned long long int var_15 = 2369196966609619415ULL;
unsigned long long int var_16 = 8983298956305005369ULL;
unsigned long long int var_17 = 7171448136189732310ULL;
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
