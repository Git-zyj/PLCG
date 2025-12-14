#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11014;
long long int var_3 = -8914701647812494179LL;
signed char var_4 = (signed char)-126;
short var_9 = (short)3432;
int zero = 0;
short var_10 = (short)-8028;
long long int var_11 = -8837377982812249928LL;
unsigned char var_12 = (unsigned char)254;
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
