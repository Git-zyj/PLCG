#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39519;
unsigned short var_5 = (unsigned short)54853;
long long int var_9 = 8515708547192042596LL;
int var_11 = 471317041;
unsigned short var_13 = (unsigned short)15584;
unsigned short var_14 = (unsigned short)15717;
long long int var_16 = -6683597225556362896LL;
int zero = 0;
long long int var_20 = -1318002044011639386LL;
unsigned short var_21 = (unsigned short)3283;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
