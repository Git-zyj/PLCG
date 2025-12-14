#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_8 = 5391744793966741531LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -1126785116065686585LL;
int zero = 0;
unsigned short var_13 = (unsigned short)30618;
unsigned short var_14 = (unsigned short)53325;
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
