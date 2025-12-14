#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1845035307;
int var_5 = -13601189;
long long int var_8 = -1972573510282154674LL;
long long int var_11 = 8672368227623733448LL;
int var_17 = 1218187986;
int zero = 0;
long long int var_20 = -3129150945653841005LL;
int var_21 = -2019844078;
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
