#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1689748384;
signed char var_4 = (signed char)60;
long long int var_6 = -6250036121575812356LL;
signed char var_7 = (signed char)-16;
signed char var_10 = (signed char)59;
signed char var_12 = (signed char)77;
int zero = 0;
unsigned int var_13 = 3511260723U;
unsigned int var_14 = 2500151334U;
signed char var_15 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
