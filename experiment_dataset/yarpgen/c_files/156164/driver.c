#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_6 = 270767502U;
unsigned long long int var_8 = 2338260174704190568ULL;
short var_9 = (short)26157;
signed char var_10 = (signed char)-46;
signed char var_11 = (signed char)-78;
unsigned int var_14 = 1102890874U;
int zero = 0;
unsigned int var_15 = 2047622U;
unsigned long long int var_16 = 5387791343028450720ULL;
unsigned char var_17 = (unsigned char)231;
void init() {
}

void checksum() {
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
