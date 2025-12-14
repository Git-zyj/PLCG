#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45392;
unsigned char var_1 = (unsigned char)46;
int var_4 = 1910139482;
int var_10 = -687973812;
unsigned char var_11 = (unsigned char)157;
int zero = 0;
long long int var_12 = -8374268968343637373LL;
long long int var_13 = 5203059014336032176LL;
unsigned short var_14 = (unsigned short)57610;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
