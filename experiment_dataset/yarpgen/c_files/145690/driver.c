#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16796040572545292117ULL;
short var_6 = (short)-11352;
long long int var_10 = -1811413416113210388LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)25122;
int var_17 = 1923644551;
short var_18 = (short)17338;
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
