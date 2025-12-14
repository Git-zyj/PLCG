#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)20;
unsigned char var_4 = (unsigned char)104;
short var_5 = (short)-11361;
int var_6 = -818367656;
unsigned short var_8 = (unsigned short)38222;
unsigned char var_11 = (unsigned char)202;
int zero = 0;
unsigned long long int var_14 = 10636921417322182143ULL;
unsigned short var_15 = (unsigned short)46733;
void init() {
}

void checksum() {
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
