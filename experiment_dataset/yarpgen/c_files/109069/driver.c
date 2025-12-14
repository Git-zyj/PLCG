#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4525733947187479449LL;
unsigned char var_7 = (unsigned char)246;
short var_8 = (short)-25965;
long long int var_11 = 8599892703337207628LL;
int zero = 0;
short var_18 = (short)30314;
unsigned char var_19 = (unsigned char)0;
long long int var_20 = -8314559776398784842LL;
void init() {
}

void checksum() {
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
