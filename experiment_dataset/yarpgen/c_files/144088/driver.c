#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1763024376U;
unsigned char var_5 = (unsigned char)148;
long long int var_6 = 5265363513616249460LL;
short var_8 = (short)12815;
unsigned char var_10 = (unsigned char)38;
int zero = 0;
short var_12 = (short)-19576;
unsigned long long int var_13 = 1430786043872920768ULL;
unsigned long long int var_14 = 6113177620822772542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
