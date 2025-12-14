#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3476692030968590928LL;
long long int var_2 = -1048837811741947294LL;
long long int var_3 = 5509707146813829561LL;
signed char var_6 = (signed char)-68;
unsigned int var_8 = 1238856428U;
unsigned short var_10 = (unsigned short)61730;
int var_11 = 183774537;
int zero = 0;
long long int var_13 = 5029908465892176091LL;
unsigned int var_14 = 2430580785U;
unsigned int var_15 = 2281338321U;
int var_16 = -484031083;
long long int var_17 = 1192698303555863283LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
