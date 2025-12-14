#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 1245943832U;
long long int var_14 = -6998974084109079690LL;
int zero = 0;
long long int var_19 = 2298915086234177042LL;
unsigned short var_20 = (unsigned short)39138;
unsigned short var_21 = (unsigned short)38846;
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
