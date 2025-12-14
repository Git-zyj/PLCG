#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1148685046;
signed char var_8 = (signed char)5;
unsigned int var_13 = 2663530963U;
short var_14 = (short)10955;
int zero = 0;
long long int var_18 = -2072288827672223382LL;
unsigned int var_19 = 3465866492U;
unsigned int var_20 = 1888913278U;
unsigned int var_21 = 2445338078U;
signed char var_22 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
