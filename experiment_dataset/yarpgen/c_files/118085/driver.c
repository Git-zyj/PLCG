#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6465;
signed char var_1 = (signed char)30;
signed char var_2 = (signed char)74;
int var_7 = 1891502314;
unsigned short var_10 = (unsigned short)8494;
int var_11 = -1490625887;
short var_12 = (short)12085;
int zero = 0;
unsigned long long int var_14 = 9039145765819027657ULL;
int var_15 = 1796034495;
long long int var_16 = -4046899602580528970LL;
unsigned long long int var_17 = 15982150441780472409ULL;
unsigned short var_18 = (unsigned short)46967;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
