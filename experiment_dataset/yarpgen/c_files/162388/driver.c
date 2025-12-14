#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4300596054966870154LL;
short var_3 = (short)465;
long long int var_12 = 4204057767862395450LL;
int zero = 0;
long long int var_18 = -1916950614243569598LL;
unsigned long long int var_19 = 8076456575819163260ULL;
signed char var_20 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
