#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
int var_3 = 1876594519;
int var_5 = 1846848312;
long long int var_8 = -7203889392279983155LL;
int var_12 = -69146610;
long long int var_13 = -1430518550612845305LL;
short var_18 = (short)17044;
int zero = 0;
long long int var_19 = -3383143753685823048LL;
int var_20 = -425442004;
void init() {
}

void checksum() {
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
