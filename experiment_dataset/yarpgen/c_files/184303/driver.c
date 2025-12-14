#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
unsigned long long int var_2 = 1757500139014176615ULL;
unsigned long long int var_7 = 2736135890125569167ULL;
long long int var_8 = 3666146413580307324LL;
signed char var_11 = (signed char)35;
int zero = 0;
short var_12 = (short)-15219;
unsigned long long int var_13 = 10413488846938784054ULL;
unsigned int var_14 = 2772386369U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
