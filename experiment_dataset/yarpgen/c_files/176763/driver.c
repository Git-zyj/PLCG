#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8452377340837513554ULL;
int var_6 = 779573129;
unsigned char var_10 = (unsigned char)3;
long long int var_11 = 4816557633198738813LL;
int zero = 0;
short var_17 = (short)-26525;
int var_18 = -200574144;
int var_19 = -1066705150;
unsigned long long int var_20 = 6121447007162012508ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
