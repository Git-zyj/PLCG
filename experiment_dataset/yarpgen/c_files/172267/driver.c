#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49482;
signed char var_10 = (signed char)41;
long long int var_15 = -5807089765875480466LL;
int zero = 0;
unsigned long long int var_16 = 12208410415971894610ULL;
unsigned long long int var_17 = 5698739381464421160ULL;
unsigned int var_18 = 3447252545U;
unsigned long long int var_19 = 14251508146598253738ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
