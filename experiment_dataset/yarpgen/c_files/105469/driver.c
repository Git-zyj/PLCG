#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2605701739U;
unsigned char var_16 = (unsigned char)0;
unsigned char var_17 = (unsigned char)112;
unsigned short var_18 = (unsigned short)53953;
int zero = 0;
unsigned long long int var_20 = 18288756051442161874ULL;
long long int var_21 = -3780260922602826353LL;
int var_22 = 1190467776;
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
