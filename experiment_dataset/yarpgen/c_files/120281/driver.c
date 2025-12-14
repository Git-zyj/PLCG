#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -605600060076635726LL;
_Bool var_7 = (_Bool)0;
long long int var_11 = 6621171068913172183LL;
int zero = 0;
short var_17 = (short)-30759;
short var_18 = (short)-1682;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
