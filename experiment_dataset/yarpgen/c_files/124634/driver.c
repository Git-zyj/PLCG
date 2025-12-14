#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_12 = (unsigned char)221;
unsigned int var_13 = 2075301711U;
long long int var_17 = -3480988870783849894LL;
int zero = 0;
long long int var_20 = 4207658931001385842LL;
long long int var_21 = 6885476373258976057LL;
void init() {
}

void checksum() {
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
