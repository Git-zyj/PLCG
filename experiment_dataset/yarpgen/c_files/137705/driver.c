#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61538;
unsigned short var_2 = (unsigned short)35776;
long long int var_5 = 5470204059790079719LL;
long long int var_6 = -2710772268679113292LL;
int var_11 = 2009475982;
int var_12 = -1291802797;
int var_13 = 1893482761;
int zero = 0;
unsigned short var_16 = (unsigned short)59457;
short var_17 = (short)2614;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
