#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-18831;
unsigned long long int var_4 = 8229325260063953143ULL;
long long int var_6 = 2142180988293680444LL;
int zero = 0;
unsigned long long int var_18 = 6242258200164254122ULL;
unsigned char var_19 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
