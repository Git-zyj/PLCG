#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2067480066;
short var_2 = (short)13208;
int var_3 = -1369906740;
short var_4 = (short)13545;
signed char var_5 = (signed char)27;
long long int var_8 = 3819237759274980659LL;
unsigned short var_9 = (unsigned short)25194;
int var_10 = 800239928;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)32;
int zero = 0;
unsigned short var_14 = (unsigned short)39805;
unsigned char var_15 = (unsigned char)196;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
