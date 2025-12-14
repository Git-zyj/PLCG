#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38442;
unsigned short var_8 = (unsigned short)9382;
unsigned long long int var_13 = 14215345780047596833ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)83;
long long int var_18 = 3788999029369800283LL;
unsigned char var_19 = (unsigned char)210;
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
