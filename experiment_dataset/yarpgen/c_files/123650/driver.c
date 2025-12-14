#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)643;
unsigned long long int var_3 = 4057165865331180654ULL;
unsigned short var_10 = (unsigned short)9490;
unsigned short var_11 = (unsigned short)50498;
int zero = 0;
short var_12 = (short)6190;
short var_13 = (short)23528;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
