#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 214199108;
short var_8 = (short)10534;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)212;
short var_18 = (short)-30997;
short var_19 = (short)-29166;
int var_20 = -1679473353;
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
