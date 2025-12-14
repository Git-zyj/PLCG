#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8869458637343315244LL;
int var_4 = -77786530;
signed char var_5 = (signed char)11;
_Bool var_13 = (_Bool)1;
unsigned char var_18 = (unsigned char)11;
int zero = 0;
int var_20 = -1594493170;
int var_21 = -424322804;
int var_22 = 1634494664;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
