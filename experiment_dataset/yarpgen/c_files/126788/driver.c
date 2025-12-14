#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4676033652783253622ULL;
signed char var_11 = (signed char)-72;
signed char var_12 = (signed char)118;
long long int var_16 = 6213668815840515462LL;
long long int var_17 = 4195319339074541774LL;
unsigned short var_18 = (unsigned short)45679;
int zero = 0;
unsigned int var_19 = 2171937248U;
int var_20 = 1892762724;
unsigned long long int var_21 = 17208227972578518047ULL;
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
