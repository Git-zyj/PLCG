#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7778432187676654286LL;
short var_4 = (short)-22803;
short var_7 = (short)-10678;
unsigned char var_13 = (unsigned char)101;
long long int var_15 = -212263408979465258LL;
short var_18 = (short)-2150;
long long int var_19 = 4375324800227812423LL;
int zero = 0;
int var_20 = -1473377944;
long long int var_21 = -6055944213190042829LL;
long long int var_22 = 740992443291117479LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
