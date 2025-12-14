#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39528;
_Bool var_4 = (_Bool)1;
unsigned short var_16 = (unsigned short)60697;
int zero = 0;
long long int var_17 = -6049458936213554202LL;
unsigned short var_18 = (unsigned short)17890;
int var_19 = 1537026221;
void init() {
}

void checksum() {
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
