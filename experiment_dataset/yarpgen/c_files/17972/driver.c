#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
long long int var_8 = -1801561582398658149LL;
long long int var_11 = 2089015034235965952LL;
long long int var_18 = 1064452973195392077LL;
int zero = 0;
int var_19 = -2014106937;
int var_20 = -2086054468;
short var_21 = (short)22346;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
