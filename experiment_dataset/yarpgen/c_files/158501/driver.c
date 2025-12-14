#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2129620225;
unsigned int var_5 = 3045602346U;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 7489946136521105582ULL;
long long int var_12 = -8537630642162475536LL;
short var_13 = (short)-16047;
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
