#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)62;
long long int var_4 = -470332202165248980LL;
long long int var_5 = 6317761716802484138LL;
long long int var_7 = -4947967728327789219LL;
int zero = 0;
long long int var_10 = -7574200400511022491LL;
signed char var_11 = (signed char)3;
long long int var_12 = -8287636465042731664LL;
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
