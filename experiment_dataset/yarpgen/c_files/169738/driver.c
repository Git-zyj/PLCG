#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
long long int var_2 = -6855341017528136716LL;
signed char var_7 = (signed char)17;
int zero = 0;
long long int var_11 = 7075140755841565346LL;
signed char var_12 = (signed char)84;
signed char var_13 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
