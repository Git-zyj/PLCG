#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4218831357499330090ULL;
unsigned int var_3 = 974663098U;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)1266;
unsigned short var_9 = (unsigned short)65504;
short var_12 = (short)7412;
int zero = 0;
short var_13 = (short)-18871;
long long int var_14 = 2507338425345771760LL;
void init() {
}

void checksum() {
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
