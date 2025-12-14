#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10016;
unsigned long long int var_5 = 5288696414144460130ULL;
int var_8 = -1626934522;
unsigned char var_9 = (unsigned char)71;
long long int var_18 = 7408351709473350132LL;
int zero = 0;
unsigned short var_19 = (unsigned short)32628;
unsigned char var_20 = (unsigned char)9;
signed char var_21 = (signed char)87;
int var_22 = 1811659369;
unsigned char var_23 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
