#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29641;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 3236226498220128670ULL;
unsigned long long int var_8 = 17483266185840194765ULL;
unsigned long long int var_9 = 5561350592509265871ULL;
int zero = 0;
unsigned int var_10 = 3591404539U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
