#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6869542280427656611LL;
long long int var_4 = 2261947669750876003LL;
unsigned short var_10 = (unsigned short)26343;
int var_13 = 493843227;
int zero = 0;
short var_14 = (short)-18277;
_Bool var_15 = (_Bool)1;
long long int var_16 = 4271001938314261329LL;
unsigned short var_17 = (unsigned short)2281;
unsigned char var_18 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
