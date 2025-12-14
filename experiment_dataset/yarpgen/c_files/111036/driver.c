#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1444484172;
_Bool var_10 = (_Bool)0;
long long int var_12 = 2770085401158203603LL;
unsigned long long int var_17 = 8014988861773973778ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)12;
short var_21 = (short)-17048;
int var_22 = -626999769;
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
