#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1471766752;
unsigned long long int var_3 = 6524455210960101452ULL;
long long int var_10 = -3819012416254625521LL;
int zero = 0;
int var_17 = 338411774;
unsigned short var_18 = (unsigned short)59740;
unsigned long long int var_19 = 3320986869046392060ULL;
int var_20 = -1841497683;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
