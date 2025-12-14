#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10525545124666682444ULL;
long long int var_10 = -2848768701879454376LL;
unsigned int var_15 = 3869892338U;
int zero = 0;
unsigned long long int var_16 = 11143048722765439607ULL;
short var_17 = (short)-20944;
long long int var_18 = 1864124736968438154LL;
void init() {
}

void checksum() {
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
