#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)2294;
_Bool var_10 = (_Bool)0;
long long int var_13 = 5980865449864670497LL;
int zero = 0;
long long int var_16 = -7144451831920644353LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = -6023094782333070450LL;
short var_19 = (short)-27261;
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
