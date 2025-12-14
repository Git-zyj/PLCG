#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_4 = 706456016;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)46764;
unsigned short var_8 = (unsigned short)20955;
int var_9 = 375210261;
int var_11 = -1397061012;
int zero = 0;
short var_13 = (short)12442;
short var_14 = (short)25828;
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
