#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2500;
long long int var_3 = 7388108133709085829LL;
long long int var_4 = 1683344920628223761LL;
unsigned long long int var_14 = 7699955554012792239ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)5348;
unsigned char var_19 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
