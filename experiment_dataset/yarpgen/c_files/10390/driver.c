#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
_Bool var_4 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)120;
int var_18 = -1445424608;
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
