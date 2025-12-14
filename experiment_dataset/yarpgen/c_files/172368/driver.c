#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13528108243446488240ULL;
unsigned int var_4 = 1097101757U;
long long int var_9 = 6926880387745516592LL;
long long int var_11 = 7651502043546988448LL;
short var_12 = (short)5339;
long long int var_15 = -761325476988104026LL;
int zero = 0;
unsigned char var_16 = (unsigned char)203;
unsigned short var_17 = (unsigned short)4948;
long long int var_18 = 6529459200610810014LL;
short var_19 = (short)-21197;
signed char var_20 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
