#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
int var_2 = 1085890381;
int var_3 = -369097291;
_Bool var_6 = (_Bool)0;
long long int var_7 = -5336678698463173268LL;
unsigned char var_8 = (unsigned char)203;
unsigned long long int var_9 = 13300205323415162850ULL;
int zero = 0;
unsigned int var_11 = 23077267U;
short var_12 = (short)6599;
int var_13 = -1051112168;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
