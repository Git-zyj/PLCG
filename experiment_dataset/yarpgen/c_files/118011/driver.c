#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4141006056U;
long long int var_2 = -3596519287659479770LL;
long long int var_3 = -4650007665101520440LL;
short var_5 = (short)26008;
unsigned char var_6 = (unsigned char)146;
long long int var_7 = -5401348111931899808LL;
int zero = 0;
unsigned long long int var_10 = 8419988516944141295ULL;
short var_11 = (short)-17235;
short var_12 = (short)6515;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
