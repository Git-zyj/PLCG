#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)26133;
long long int var_7 = -5493806626592900942LL;
unsigned int var_8 = 104552890U;
short var_12 = (short)21218;
int zero = 0;
unsigned int var_15 = 2875370185U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 17350246121360744274ULL;
int var_18 = -1041716919;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
