#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3726646003U;
short var_4 = (short)-25882;
unsigned long long int var_5 = 12467315853154269389ULL;
unsigned char var_6 = (unsigned char)153;
_Bool var_10 = (_Bool)0;
unsigned int var_14 = 2742421318U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1506074192U;
void init() {
}

void checksum() {
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
