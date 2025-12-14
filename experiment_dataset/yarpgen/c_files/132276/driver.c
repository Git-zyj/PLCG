#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 596524468606333289ULL;
unsigned int var_2 = 173731730U;
signed char var_3 = (signed char)-54;
signed char var_4 = (signed char)69;
int var_11 = 750160868;
signed char var_12 = (signed char)-99;
int zero = 0;
long long int var_17 = -5093421556793097878LL;
unsigned long long int var_18 = 1014051352055001848ULL;
int var_19 = 1799887520;
signed char var_20 = (signed char)78;
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
