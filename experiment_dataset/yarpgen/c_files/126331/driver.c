#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6162414436847563754ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1368507321363546149LL;
unsigned char var_18 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
