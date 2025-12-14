#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59153;
unsigned long long int var_10 = 7696873456550298740ULL;
unsigned char var_13 = (unsigned char)7;
int zero = 0;
unsigned long long int var_14 = 15155373142270039687ULL;
int var_15 = 1181293854;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
