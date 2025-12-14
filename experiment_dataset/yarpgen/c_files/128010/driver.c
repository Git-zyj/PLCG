#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1262;
int var_6 = -1359538371;
unsigned short var_7 = (unsigned short)46856;
long long int var_11 = 3201014069586014580LL;
unsigned char var_14 = (unsigned char)26;
unsigned short var_16 = (unsigned short)51190;
int zero = 0;
int var_18 = 1201180900;
int var_19 = 575805997;
void init() {
}

void checksum() {
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
