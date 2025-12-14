#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10344202970953877184ULL;
long long int var_10 = 6234797076286623413LL;
short var_13 = (short)25369;
unsigned long long int var_17 = 6641162039938322640ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)81;
unsigned char var_20 = (unsigned char)240;
unsigned int var_21 = 3643275615U;
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
