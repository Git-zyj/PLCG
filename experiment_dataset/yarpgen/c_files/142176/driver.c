#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2368326325U;
int var_3 = 1817639210;
long long int var_5 = 9096649469925932536LL;
unsigned int var_11 = 354901446U;
unsigned char var_19 = (unsigned char)203;
int zero = 0;
short var_20 = (short)4048;
signed char var_21 = (signed char)-94;
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
