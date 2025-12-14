#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -263368665429465459LL;
long long int var_6 = 8353583312675154901LL;
long long int var_7 = 4967818103186898626LL;
int zero = 0;
short var_10 = (short)6131;
long long int var_11 = -7121878673629376704LL;
signed char var_12 = (signed char)4;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
