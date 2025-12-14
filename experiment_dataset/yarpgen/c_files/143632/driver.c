#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26776;
unsigned int var_8 = 1325100582U;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1866282263;
int var_19 = -1202993105;
unsigned short var_20 = (unsigned short)35957;
unsigned long long int var_21 = 4570652206663032436ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
