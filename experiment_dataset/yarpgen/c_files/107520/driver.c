#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1007965705166568785LL;
int var_4 = 337742152;
int var_8 = 941439472;
unsigned short var_9 = (unsigned short)26512;
int zero = 0;
unsigned int var_10 = 362501394U;
unsigned int var_11 = 1201641598U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
