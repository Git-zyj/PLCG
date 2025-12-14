#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3204709036U;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-7803;
int zero = 0;
unsigned short var_12 = (unsigned short)48788;
unsigned int var_13 = 1357614087U;
unsigned int var_14 = 3994413117U;
void init() {
}

void checksum() {
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
