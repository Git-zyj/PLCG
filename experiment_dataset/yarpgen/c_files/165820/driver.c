#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26616;
long long int var_2 = -6864204307370169794LL;
unsigned char var_9 = (unsigned char)233;
int zero = 0;
long long int var_11 = -1756986701824037268LL;
unsigned char var_12 = (unsigned char)241;
long long int var_13 = 8831728827409246116LL;
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
