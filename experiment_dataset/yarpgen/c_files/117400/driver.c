#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -62905094;
long long int var_5 = -1522946215539497777LL;
unsigned long long int var_8 = 7561540366173143281ULL;
unsigned char var_10 = (unsigned char)59;
int var_11 = 338954374;
int zero = 0;
signed char var_16 = (signed char)-22;
unsigned short var_17 = (unsigned short)40143;
unsigned int var_18 = 2284691060U;
signed char var_19 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
