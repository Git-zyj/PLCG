#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7209185825789798945LL;
int var_3 = 1377703264;
long long int var_10 = -7542383117745553095LL;
unsigned long long int var_13 = 1428710290760936140ULL;
signed char var_14 = (signed char)45;
int zero = 0;
unsigned short var_15 = (unsigned short)32254;
long long int var_16 = -6066646569915376274LL;
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
