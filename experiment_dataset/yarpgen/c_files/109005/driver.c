#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15463;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)9074;
short var_15 = (short)-4118;
int zero = 0;
unsigned int var_16 = 3578992906U;
unsigned short var_17 = (unsigned short)51219;
int var_18 = -1837623039;
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
