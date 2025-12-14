#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1234968171;
long long int var_9 = 6248699587281329685LL;
int zero = 0;
signed char var_11 = (signed char)-54;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-21077;
long long int var_14 = -6202638410435804882LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
