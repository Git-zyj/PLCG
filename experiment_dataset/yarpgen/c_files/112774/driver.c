#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4383361347022914561ULL;
unsigned short var_12 = (unsigned short)17532;
unsigned int var_16 = 2853411318U;
long long int var_17 = 7072228660392858111LL;
int zero = 0;
short var_20 = (short)5464;
unsigned long long int var_21 = 12321387017025354214ULL;
void init() {
}

void checksum() {
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
