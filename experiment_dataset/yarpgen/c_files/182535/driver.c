#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -830589929;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-31256;
unsigned char var_6 = (unsigned char)144;
unsigned long long int var_10 = 12392149714381558561ULL;
signed char var_15 = (signed char)90;
int zero = 0;
short var_20 = (short)-30404;
signed char var_21 = (signed char)-26;
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
