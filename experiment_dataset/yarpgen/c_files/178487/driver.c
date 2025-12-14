#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1763286563;
unsigned int var_5 = 1920076732U;
_Bool var_6 = (_Bool)1;
long long int var_7 = -3065417673512463988LL;
int var_10 = -1759314288;
int zero = 0;
unsigned int var_14 = 2418785514U;
unsigned int var_15 = 3275962996U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
