#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_5 = (short)-18910;
unsigned short var_8 = (unsigned short)38168;
int var_13 = -2024444122;
long long int var_14 = -6089552546469912795LL;
unsigned long long int var_16 = 11933835894068358153ULL;
int zero = 0;
unsigned int var_17 = 1662808590U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
