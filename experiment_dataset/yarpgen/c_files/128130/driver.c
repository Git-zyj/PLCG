#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3482445683803107403LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)47375;
short var_8 = (short)-4803;
int var_10 = 2037796542;
unsigned short var_14 = (unsigned short)9939;
int zero = 0;
short var_15 = (short)17395;
unsigned long long int var_16 = 17048322482967695563ULL;
unsigned short var_17 = (unsigned short)35775;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
