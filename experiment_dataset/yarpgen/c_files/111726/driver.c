#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)6;
long long int var_8 = -8371315064235688945LL;
short var_10 = (short)-15679;
unsigned int var_11 = 1665051454U;
int var_14 = 538208763;
long long int var_19 = -4452797872112264207LL;
int zero = 0;
int var_20 = 354083694;
signed char var_21 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
