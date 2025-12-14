#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24266;
short var_1 = (short)-29036;
long long int var_6 = -7917243048099072693LL;
unsigned short var_7 = (unsigned short)46656;
long long int var_8 = -8123444866910368876LL;
short var_9 = (short)-28908;
short var_10 = (short)28742;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)1196;
long long int var_13 = 7698314468735167741LL;
unsigned short var_14 = (unsigned short)43116;
signed char var_15 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
