#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 370584700U;
unsigned short var_3 = (unsigned short)51021;
unsigned int var_4 = 245432802U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 843903008U;
int var_8 = 1859075381;
int var_9 = 419607806;
short var_10 = (short)7218;
int zero = 0;
int var_12 = 561944710;
unsigned long long int var_13 = 15155165795976914214ULL;
int var_14 = -761919412;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
