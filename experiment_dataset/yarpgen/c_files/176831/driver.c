#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5126;
unsigned char var_3 = (unsigned char)78;
long long int var_5 = 3038525667415237393LL;
long long int var_7 = -4648336290604443377LL;
short var_8 = (short)21364;
int zero = 0;
int var_10 = 540360405;
unsigned long long int var_11 = 8083655897889296527ULL;
unsigned int var_12 = 303000568U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
