#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3781469647U;
unsigned long long int var_3 = 15694041031179956573ULL;
unsigned char var_7 = (unsigned char)20;
unsigned short var_8 = (unsigned short)31445;
unsigned int var_13 = 1569192664U;
int zero = 0;
unsigned long long int var_15 = 18159623336228839208ULL;
unsigned int var_16 = 1722680908U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
