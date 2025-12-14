#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29786;
unsigned int var_2 = 721367578U;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_9 = (short)7373;
unsigned int var_10 = 1783202189U;
long long int var_12 = 8702825751869561303LL;
long long int var_13 = 266927953914430661LL;
int zero = 0;
int var_15 = -746184288;
unsigned short var_16 = (unsigned short)20767;
unsigned short var_17 = (unsigned short)4449;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
