#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1945152401;
long long int var_2 = 2997432737872416592LL;
unsigned long long int var_3 = 897638202665768007ULL;
unsigned char var_4 = (unsigned char)74;
short var_5 = (short)-23939;
unsigned short var_6 = (unsigned short)23291;
unsigned long long int var_12 = 2704167936428616375ULL;
long long int var_15 = -6224673445232726588LL;
int zero = 0;
int var_18 = 1012363893;
unsigned short var_19 = (unsigned short)55624;
long long int var_20 = -931404774779742044LL;
unsigned short var_21 = (unsigned short)16427;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
