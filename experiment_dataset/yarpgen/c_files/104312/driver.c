#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12502041004904049504ULL;
int var_11 = -1057117827;
int var_15 = -2100693452;
int zero = 0;
unsigned int var_20 = 2351848032U;
unsigned int var_21 = 2103995473U;
short var_22 = (short)30130;
long long int var_23 = -1819861829787338050LL;
void init() {
}

void checksum() {
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
