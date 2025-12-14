#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3902509465935381333LL;
signed char var_7 = (signed char)90;
short var_13 = (short)3066;
int zero = 0;
unsigned char var_19 = (unsigned char)100;
unsigned short var_20 = (unsigned short)26993;
unsigned long long int var_21 = 624196129694240918ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
