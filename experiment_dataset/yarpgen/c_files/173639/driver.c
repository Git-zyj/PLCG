#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 123801734U;
unsigned long long int var_3 = 12290440105001149597ULL;
long long int var_5 = 2800900360325192977LL;
unsigned short var_6 = (unsigned short)21877;
unsigned long long int var_7 = 8928149177981038346ULL;
signed char var_9 = (signed char)-127;
unsigned int var_10 = 2275965405U;
unsigned int var_12 = 3826874469U;
unsigned short var_13 = (unsigned short)24757;
long long int var_14 = -6370951860742385469LL;
int zero = 0;
unsigned short var_16 = (unsigned short)404;
signed char var_17 = (signed char)-57;
signed char var_18 = (signed char)-27;
short var_19 = (short)-30376;
unsigned long long int var_20 = 16523117595068887271ULL;
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
