#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52577;
unsigned long long int var_4 = 12664937130133200805ULL;
short var_5 = (short)12411;
long long int var_11 = -5410183916897939338LL;
unsigned short var_13 = (unsigned short)32326;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)29131;
unsigned int var_18 = 3301018378U;
unsigned short var_19 = (unsigned short)21264;
unsigned short var_20 = (unsigned short)58010;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
