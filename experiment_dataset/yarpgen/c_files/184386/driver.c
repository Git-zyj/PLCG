#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
long long int var_3 = -6932378101308676930LL;
int var_4 = -151178553;
unsigned short var_7 = (unsigned short)35436;
int var_10 = 1300313837;
unsigned long long int var_11 = 10476494521234516022ULL;
signed char var_15 = (signed char)72;
unsigned int var_19 = 2225244532U;
int zero = 0;
unsigned short var_20 = (unsigned short)56537;
unsigned char var_21 = (unsigned char)87;
unsigned char var_22 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
