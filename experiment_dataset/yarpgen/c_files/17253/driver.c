#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1301352644;
unsigned short var_2 = (unsigned short)46299;
int var_3 = -944099207;
unsigned short var_4 = (unsigned short)18414;
unsigned short var_11 = (unsigned short)53151;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -4423808;
int var_15 = -1795758627;
unsigned short var_16 = (unsigned short)51360;
int var_17 = -1583837354;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
