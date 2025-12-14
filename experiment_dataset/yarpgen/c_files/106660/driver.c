#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-64;
int var_3 = 795251794;
unsigned char var_4 = (unsigned char)121;
long long int var_5 = -4399187907205130102LL;
short var_6 = (short)-31528;
int var_7 = -2141830165;
int zero = 0;
unsigned short var_10 = (unsigned short)65347;
short var_11 = (short)-17484;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
