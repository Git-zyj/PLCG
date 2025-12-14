#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1102265677425964868LL;
unsigned short var_6 = (unsigned short)21306;
unsigned int var_8 = 2958521859U;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)60033;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-30148;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
