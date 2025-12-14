#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -1425666367;
short var_4 = (short)23100;
unsigned long long int var_9 = 1393572364313577404ULL;
int zero = 0;
long long int var_13 = 1825697105040756858LL;
long long int var_14 = 422390630430294817LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
