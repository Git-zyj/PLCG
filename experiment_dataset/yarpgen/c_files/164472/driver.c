#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28623;
unsigned int var_5 = 1980469540U;
long long int var_6 = 4350444664438208450LL;
int var_7 = -1846974684;
long long int var_10 = 390548293019738021LL;
int var_12 = -1884929280;
signed char var_14 = (signed char)82;
int zero = 0;
unsigned int var_16 = 3262155549U;
signed char var_17 = (signed char)95;
unsigned short var_18 = (unsigned short)25354;
unsigned short var_19 = (unsigned short)22948;
int var_20 = 849577709;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
