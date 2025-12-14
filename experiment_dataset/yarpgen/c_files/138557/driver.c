#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2252764707689646818LL;
long long int var_4 = -4816352201185505157LL;
unsigned int var_5 = 1721032450U;
int var_7 = 1807941568;
unsigned char var_8 = (unsigned char)21;
unsigned int var_9 = 3729081753U;
signed char var_10 = (signed char)8;
int zero = 0;
unsigned short var_11 = (unsigned short)39230;
unsigned short var_12 = (unsigned short)58523;
short var_13 = (short)16475;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
