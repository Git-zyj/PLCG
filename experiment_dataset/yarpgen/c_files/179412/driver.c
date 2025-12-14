#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 356876045U;
unsigned int var_1 = 378277246U;
unsigned int var_4 = 2218918002U;
signed char var_6 = (signed char)-64;
unsigned int var_9 = 3126030981U;
unsigned int var_10 = 649244784U;
unsigned int var_13 = 4248413596U;
int zero = 0;
long long int var_14 = -3154165184427189616LL;
unsigned int var_15 = 4165745097U;
signed char var_16 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
