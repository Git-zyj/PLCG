#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4075079119U;
_Bool var_1 = (_Bool)1;
int var_2 = 1236720779;
unsigned int var_3 = 2226984181U;
long long int var_4 = 7250754500728474434LL;
unsigned char var_6 = (unsigned char)55;
int var_11 = -493256828;
int zero = 0;
signed char var_16 = (signed char)11;
int var_17 = 1360941988;
short var_18 = (short)-1512;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
