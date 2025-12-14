#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5985169572707305076LL;
long long int var_2 = 9168231506043390137LL;
unsigned char var_5 = (unsigned char)114;
short var_8 = (short)-7838;
unsigned short var_10 = (unsigned short)22342;
int zero = 0;
unsigned char var_11 = (unsigned char)56;
unsigned char var_12 = (unsigned char)96;
int var_13 = -1954794618;
unsigned char var_14 = (unsigned char)127;
unsigned char var_15 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
