#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6826553338863861843LL;
long long int var_9 = -2586160156865855438LL;
short var_10 = (short)-15620;
long long int var_15 = 1408804037576670269LL;
int zero = 0;
unsigned char var_16 = (unsigned char)19;
unsigned short var_17 = (unsigned short)6947;
unsigned int var_18 = 944060612U;
long long int var_19 = -9108912458426398400LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
