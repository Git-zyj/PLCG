#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
unsigned int var_1 = 4278621090U;
unsigned int var_2 = 1794151872U;
unsigned int var_3 = 1387316225U;
int var_5 = 247788444;
unsigned long long int var_6 = 4852865414414867526ULL;
unsigned char var_12 = (unsigned char)254;
unsigned long long int var_13 = 7229529929441604102ULL;
int var_17 = -2079149;
int zero = 0;
int var_19 = 1057315226;
unsigned int var_20 = 2167754641U;
void init() {
}

void checksum() {
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
