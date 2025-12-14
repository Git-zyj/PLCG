#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-123;
long long int var_4 = 6702501475306039968LL;
long long int var_6 = 1516967076880015868LL;
int var_11 = 1646616081;
int var_13 = -1459791317;
int zero = 0;
long long int var_14 = 2878271257595243493LL;
unsigned char var_15 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
