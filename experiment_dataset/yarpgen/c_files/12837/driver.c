#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16377403517315820969ULL;
unsigned long long int var_1 = 4584849698467810110ULL;
signed char var_5 = (signed char)57;
unsigned long long int var_6 = 8335617105829959960ULL;
unsigned char var_10 = (unsigned char)215;
long long int var_11 = -8986440444645478479LL;
long long int var_12 = 5590576470031826568LL;
int var_14 = 1310238251;
long long int var_16 = 5321193565533172809LL;
int zero = 0;
int var_18 = -1067187236;
int var_19 = -1658880826;
long long int var_20 = 1781097354143120288LL;
unsigned long long int var_21 = 4900229193488955439ULL;
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
