#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8397742016558460445LL;
short var_4 = (short)-18546;
unsigned short var_10 = (unsigned short)22395;
unsigned short var_12 = (unsigned short)31296;
int zero = 0;
int var_13 = -1096145738;
short var_14 = (short)18450;
unsigned int var_15 = 3160822978U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
