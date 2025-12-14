#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24042;
signed char var_10 = (signed char)-3;
short var_13 = (short)9242;
short var_14 = (short)-21917;
short var_15 = (short)26038;
int zero = 0;
short var_16 = (short)-28055;
signed char var_17 = (signed char)-60;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
