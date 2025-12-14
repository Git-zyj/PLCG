#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6874324145630451492LL;
unsigned int var_1 = 2444107284U;
unsigned short var_2 = (unsigned short)20202;
unsigned short var_5 = (unsigned short)18659;
_Bool var_6 = (_Bool)0;
int var_12 = -983947672;
int zero = 0;
unsigned short var_16 = (unsigned short)48847;
short var_17 = (short)-5071;
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
