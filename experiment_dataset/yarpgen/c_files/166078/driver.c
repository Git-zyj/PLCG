#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6190932540501468708LL;
long long int var_7 = 2467959130872796738LL;
unsigned long long int var_12 = 10684074378700509733ULL;
signed char var_18 = (signed char)-87;
int zero = 0;
unsigned char var_20 = (unsigned char)68;
unsigned int var_21 = 4155847443U;
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
