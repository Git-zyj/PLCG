#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29996;
long long int var_2 = -5043922611256517197LL;
unsigned short var_5 = (unsigned short)7058;
long long int var_7 = 5233628084550880820LL;
unsigned long long int var_13 = 4007493714059923951ULL;
unsigned long long int var_14 = 15357167142293640411ULL;
unsigned long long int var_16 = 12685059836071671832ULL;
int zero = 0;
unsigned long long int var_19 = 10393980404503585435ULL;
int var_20 = -2122448544;
unsigned short var_21 = (unsigned short)24939;
unsigned short var_22 = (unsigned short)5089;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
