#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4360592842292485720LL;
unsigned char var_5 = (unsigned char)62;
signed char var_12 = (signed char)-83;
unsigned char var_13 = (unsigned char)48;
signed char var_15 = (signed char)6;
int zero = 0;
long long int var_17 = -3261708675606737215LL;
signed char var_18 = (signed char)103;
signed char var_19 = (signed char)110;
unsigned short var_20 = (unsigned short)7272;
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
