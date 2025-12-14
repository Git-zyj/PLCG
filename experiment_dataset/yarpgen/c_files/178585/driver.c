#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)0;
unsigned short var_12 = (unsigned short)2844;
unsigned short var_13 = (unsigned short)29675;
int zero = 0;
signed char var_18 = (signed char)-22;
long long int var_19 = -8035759583388174227LL;
unsigned short var_20 = (unsigned short)5158;
unsigned long long int var_21 = 2785338687862579738ULL;
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
