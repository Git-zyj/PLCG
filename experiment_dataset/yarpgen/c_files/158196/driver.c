#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1645;
unsigned short var_5 = (unsigned short)43266;
int var_6 = -1806472217;
long long int var_7 = -6808775513116856158LL;
unsigned short var_11 = (unsigned short)62;
unsigned short var_14 = (unsigned short)17241;
signed char var_16 = (signed char)-53;
long long int var_17 = -8630734713741516092LL;
int zero = 0;
long long int var_18 = -5627468504947083161LL;
signed char var_19 = (signed char)75;
unsigned int var_20 = 3829716613U;
void init() {
}

void checksum() {
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
