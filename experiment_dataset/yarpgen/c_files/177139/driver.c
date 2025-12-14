#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14750645858334136788ULL;
long long int var_6 = -8781148515414420015LL;
short var_9 = (short)-31534;
int var_11 = 1786709369;
int var_13 = 802773038;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 5090411716494073665LL;
unsigned short var_16 = (unsigned short)60407;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
