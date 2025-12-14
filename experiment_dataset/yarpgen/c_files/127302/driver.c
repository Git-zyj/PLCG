#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned char var_4 = (unsigned char)94;
signed char var_5 = (signed char)10;
signed char var_7 = (signed char)-62;
unsigned short var_10 = (unsigned short)2237;
int zero = 0;
unsigned long long int var_13 = 17487281092783615471ULL;
unsigned long long int var_14 = 9652695850337114818ULL;
long long int var_15 = -8177935704658944426LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
