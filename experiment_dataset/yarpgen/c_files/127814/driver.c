#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32644;
unsigned long long int var_1 = 12490475484588697993ULL;
unsigned char var_3 = (unsigned char)114;
short var_4 = (short)-8848;
short var_7 = (short)-12529;
int zero = 0;
long long int var_10 = 8876288642114350925LL;
short var_11 = (short)-32086;
short var_12 = (short)11316;
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
