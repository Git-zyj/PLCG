#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2777;
int var_3 = -322669121;
unsigned int var_5 = 146570033U;
unsigned char var_6 = (unsigned char)7;
long long int var_7 = -5531016764714116011LL;
unsigned short var_8 = (unsigned short)39451;
_Bool var_10 = (_Bool)1;
int var_11 = 741068773;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 8402196690062870121ULL;
unsigned short var_15 = (unsigned short)920;
unsigned short var_16 = (unsigned short)45917;
short var_17 = (short)-29915;
void init() {
}

void checksum() {
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
