#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5213185353367761756ULL;
unsigned char var_5 = (unsigned char)124;
int var_6 = -1733763927;
unsigned int var_10 = 3484914941U;
unsigned int var_12 = 1743634755U;
int zero = 0;
unsigned char var_14 = (unsigned char)9;
unsigned short var_15 = (unsigned short)62961;
unsigned int var_16 = 1626686340U;
unsigned long long int var_17 = 16842988175423498584ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
