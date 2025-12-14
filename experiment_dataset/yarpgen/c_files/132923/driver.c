#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -292248527;
long long int var_7 = -3437837170698660076LL;
short var_12 = (short)-12200;
long long int var_16 = 5696576132735814829LL;
int zero = 0;
unsigned long long int var_17 = 8989927516274524126ULL;
unsigned short var_18 = (unsigned short)34676;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
