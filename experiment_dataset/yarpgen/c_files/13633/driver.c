#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9518;
short var_2 = (short)31112;
unsigned char var_5 = (unsigned char)76;
int zero = 0;
int var_15 = 1308028192;
unsigned long long int var_16 = 6390537265150307328ULL;
unsigned char var_17 = (unsigned char)6;
unsigned long long int var_18 = 12904465142280894878ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
