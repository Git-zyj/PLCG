#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-45;
signed char var_11 = (signed char)-18;
int zero = 0;
signed char var_12 = (signed char)81;
long long int var_13 = -8414426443811275560LL;
unsigned int var_14 = 2942099577U;
void init() {
}

void checksum() {
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
