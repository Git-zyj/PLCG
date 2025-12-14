#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)34749;
unsigned char var_10 = (unsigned char)198;
unsigned char var_11 = (unsigned char)133;
signed char var_15 = (signed char)111;
unsigned char var_17 = (unsigned char)68;
int zero = 0;
long long int var_20 = 1021929922571959968LL;
unsigned int var_21 = 499147312U;
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
