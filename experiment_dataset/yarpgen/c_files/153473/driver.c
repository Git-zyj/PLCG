#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
short var_2 = (short)-2131;
unsigned char var_3 = (unsigned char)25;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = 1783378418;
unsigned int var_13 = 3230984593U;
void init() {
}

void checksum() {
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
