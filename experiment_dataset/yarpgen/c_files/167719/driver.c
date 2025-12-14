#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 355857648;
unsigned long long int var_4 = 10438381488025130161ULL;
signed char var_6 = (signed char)74;
int var_15 = -1646761153;
int zero = 0;
unsigned long long int var_20 = 13458146621934885185ULL;
unsigned long long int var_21 = 10875415505425685501ULL;
int var_22 = -1082272963;
long long int var_23 = -1346020573402039178LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
