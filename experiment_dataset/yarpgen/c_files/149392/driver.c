#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4546696093716310845LL;
int var_10 = 317157049;
short var_12 = (short)-14415;
int zero = 0;
unsigned long long int var_14 = 11915958238301071703ULL;
long long int var_15 = 5084550274023306919LL;
unsigned long long int var_16 = 8406721967417136978ULL;
signed char var_17 = (signed char)(-127 - 1);
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
