#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 1128325186;
_Bool var_16 = (_Bool)1;
short var_17 = (short)25766;
unsigned char var_18 = (unsigned char)14;
int zero = 0;
short var_20 = (short)-27653;
long long int var_21 = -6029716722692891335LL;
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
