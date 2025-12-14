#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37305;
short var_8 = (short)-4270;
_Bool var_11 = (_Bool)1;
_Bool var_16 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)-31052;
short var_21 = (short)22698;
unsigned char var_22 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
