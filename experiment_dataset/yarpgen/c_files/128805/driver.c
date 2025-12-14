#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-10443;
short var_2 = (short)-2981;
short var_3 = (short)-15553;
unsigned long long int var_4 = 2009057946920735937ULL;
unsigned long long int var_5 = 5159349732473897987ULL;
unsigned long long int var_6 = 469038524853981814ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1187340628U;
short var_9 = (short)16797;
int zero = 0;
short var_12 = (short)-22019;
_Bool var_13 = (_Bool)0;
int var_14 = -386843274;
short var_15 = (short)-19873;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
