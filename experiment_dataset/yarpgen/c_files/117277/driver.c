#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25537;
unsigned int var_1 = 1318614233U;
unsigned short var_2 = (unsigned short)25250;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 796563321312458216ULL;
unsigned short var_7 = (unsigned short)41466;
long long int var_10 = 3845375711810118529LL;
int var_12 = -1446130943;
int zero = 0;
unsigned short var_13 = (unsigned short)26790;
unsigned short var_14 = (unsigned short)13296;
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
