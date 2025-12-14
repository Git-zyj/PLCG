#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 836788327889984682LL;
long long int var_4 = 3522747249971881896LL;
unsigned long long int var_5 = 17003431364245048571ULL;
signed char var_9 = (signed char)25;
short var_18 = (short)15339;
int zero = 0;
unsigned long long int var_19 = 10298794161860160719ULL;
unsigned short var_20 = (unsigned short)1053;
unsigned long long int var_21 = 6864555774564350221ULL;
unsigned short var_22 = (unsigned short)39561;
unsigned short var_23 = (unsigned short)38212;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
