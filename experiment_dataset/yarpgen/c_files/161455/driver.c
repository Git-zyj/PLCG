#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-15377;
unsigned int var_12 = 1748398064U;
unsigned short var_14 = (unsigned short)61975;
signed char var_15 = (signed char)-71;
unsigned short var_18 = (unsigned short)10263;
int zero = 0;
unsigned int var_19 = 1471933990U;
long long int var_20 = 4338952183115274356LL;
signed char var_21 = (signed char)-2;
void init() {
}

void checksum() {
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
