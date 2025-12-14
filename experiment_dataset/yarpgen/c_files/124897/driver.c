#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10539;
long long int var_3 = -4602777034029488970LL;
unsigned int var_5 = 853791011U;
unsigned int var_7 = 94587012U;
unsigned int var_8 = 3998048785U;
unsigned short var_12 = (unsigned short)35480;
int zero = 0;
unsigned long long int var_13 = 16038369818233530579ULL;
short var_14 = (short)-14366;
unsigned int var_15 = 3882331211U;
void init() {
}

void checksum() {
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
