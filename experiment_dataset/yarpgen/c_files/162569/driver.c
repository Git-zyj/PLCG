#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1429740923;
short var_2 = (short)-32750;
short var_5 = (short)5386;
int var_8 = -1627504942;
long long int var_12 = -3447399303556266664LL;
unsigned int var_14 = 3970555327U;
unsigned short var_16 = (unsigned short)65128;
int var_17 = 377309648;
int zero = 0;
long long int var_20 = 7817880811140358437LL;
unsigned long long int var_21 = 16840428789701787597ULL;
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
