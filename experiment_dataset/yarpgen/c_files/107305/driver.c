#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28854;
short var_3 = (short)4197;
_Bool var_4 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 16384701010788401716ULL;
short var_12 = (short)12764;
long long int var_13 = -7589735667111273038LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
