#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = 1613745224;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1691073010U;
int var_11 = 1332806757;
unsigned long long int var_13 = 18274472880969841524ULL;
unsigned int var_15 = 2392628143U;
int zero = 0;
int var_16 = 604897996;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)42756;
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
