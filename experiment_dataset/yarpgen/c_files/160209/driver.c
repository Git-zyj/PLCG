#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7497878590842083545LL;
int var_6 = -1745613872;
unsigned long long int var_7 = 2276643282288398514ULL;
int zero = 0;
short var_20 = (short)-15228;
short var_21 = (short)19886;
short var_22 = (short)-15619;
int var_23 = 18818305;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
