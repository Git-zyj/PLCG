#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)30298;
unsigned int var_7 = 2929841264U;
_Bool var_9 = (_Bool)0;
long long int var_12 = -5426085159697597159LL;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 3092708451U;
int zero = 0;
int var_16 = -1498635674;
short var_17 = (short)9671;
_Bool var_18 = (_Bool)1;
long long int var_19 = -6328379269260432354LL;
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
