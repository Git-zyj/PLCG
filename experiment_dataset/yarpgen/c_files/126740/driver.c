#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)246;
unsigned long long int var_9 = 3117073907677288139ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 386572185U;
int zero = 0;
unsigned char var_18 = (unsigned char)132;
_Bool var_19 = (_Bool)1;
long long int var_20 = -768731536367661468LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
