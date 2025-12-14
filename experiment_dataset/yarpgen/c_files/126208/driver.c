#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
_Bool var_10 = (_Bool)0;
int var_14 = 332868044;
unsigned long long int var_15 = 18316220073451800695ULL;
unsigned char var_16 = (unsigned char)50;
int zero = 0;
int var_18 = 339176649;
int var_19 = 1819106073;
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
