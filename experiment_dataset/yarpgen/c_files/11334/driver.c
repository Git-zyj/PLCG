#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12641633210368761219ULL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_9 = 877642885036039898ULL;
unsigned short var_11 = (unsigned short)31469;
int var_13 = 1779739148;
signed char var_15 = (signed char)-112;
int zero = 0;
short var_16 = (short)-14285;
int var_17 = -1117666178;
unsigned long long int var_18 = 16908223129597990435ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
