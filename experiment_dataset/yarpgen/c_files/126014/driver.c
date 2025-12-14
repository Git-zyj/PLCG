#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2334177429U;
signed char var_4 = (signed char)115;
signed char var_5 = (signed char)-1;
short var_9 = (short)21065;
int var_10 = -2034682670;
int var_11 = -1287443528;
long long int var_12 = -6823410942640935701LL;
int var_13 = -1293380829;
unsigned char var_18 = (unsigned char)32;
int zero = 0;
unsigned long long int var_19 = 6491145852977001236ULL;
unsigned long long int var_20 = 10905096986739199938ULL;
int var_21 = 1391072024;
int var_22 = 1150265126;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
