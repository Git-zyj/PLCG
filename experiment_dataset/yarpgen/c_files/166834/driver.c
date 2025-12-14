#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16500843200724786388ULL;
unsigned char var_2 = (unsigned char)215;
unsigned int var_8 = 1212534796U;
unsigned char var_11 = (unsigned char)48;
int zero = 0;
int var_13 = -685567854;
short var_14 = (short)27665;
unsigned long long int var_15 = 18376579980156997467ULL;
unsigned int var_16 = 643436866U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
