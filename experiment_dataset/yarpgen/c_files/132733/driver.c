#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 660731849U;
unsigned char var_4 = (unsigned char)130;
signed char var_12 = (signed char)-45;
unsigned int var_14 = 3062803102U;
short var_16 = (short)-13588;
int zero = 0;
unsigned int var_17 = 1080131632U;
long long int var_18 = -2505055862675345181LL;
long long int var_19 = 3047573716651216390LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
