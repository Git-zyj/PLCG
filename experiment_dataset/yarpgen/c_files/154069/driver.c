#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26102;
unsigned int var_1 = 1731363947U;
unsigned int var_4 = 1513116070U;
unsigned long long int var_6 = 7894772034740050755ULL;
unsigned long long int var_7 = 17342853772331491767ULL;
unsigned long long int var_8 = 11769982863922637343ULL;
unsigned int var_10 = 3052753438U;
short var_11 = (short)9816;
short var_13 = (short)-18659;
int var_15 = -1585850547;
short var_16 = (short)23158;
int zero = 0;
unsigned long long int var_18 = 1004764673146981011ULL;
short var_19 = (short)6966;
short var_20 = (short)4119;
void init() {
}

void checksum() {
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
