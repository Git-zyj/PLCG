#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)94;
long long int var_5 = -8855259482158682174LL;
long long int var_6 = -2738490742682463847LL;
unsigned char var_7 = (unsigned char)136;
int zero = 0;
short var_12 = (short)-21876;
int var_13 = 1159351653;
void init() {
}

void checksum() {
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
