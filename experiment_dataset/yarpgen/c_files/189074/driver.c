#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
unsigned short var_2 = (unsigned short)38463;
unsigned long long int var_3 = 11810417559466640536ULL;
unsigned short var_4 = (unsigned short)2763;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1095922789U;
unsigned short var_11 = (unsigned short)22135;
_Bool var_12 = (_Bool)1;
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
