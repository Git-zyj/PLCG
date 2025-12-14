#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)11;
long long int var_6 = -4526144540951470771LL;
signed char var_14 = (signed char)90;
int var_15 = 786098222;
signed char var_16 = (signed char)-54;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-28058;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
