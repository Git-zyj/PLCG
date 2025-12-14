#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1593073441;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 3797524723U;
int zero = 0;
int var_11 = -1810446833;
unsigned short var_12 = (unsigned short)20624;
void init() {
}

void checksum() {
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
