#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3714049552U;
_Bool var_7 = (_Bool)0;
short var_9 = (short)4215;
int zero = 0;
unsigned short var_14 = (unsigned short)63512;
short var_15 = (short)-1592;
int var_16 = -89374354;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
