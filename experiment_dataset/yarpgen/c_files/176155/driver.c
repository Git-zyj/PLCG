#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4687860460295530871LL;
unsigned char var_6 = (unsigned char)242;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)83;
unsigned short var_9 = (unsigned short)46669;
int zero = 0;
short var_10 = (short)-20497;
int var_11 = 233266112;
int var_12 = -1953419515;
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
