#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10400;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
long long int var_4 = -398405814435937453LL;
short var_8 = (short)-2816;
int var_9 = -951784913;
signed char var_12 = (signed char)108;
int zero = 0;
long long int var_15 = 7571921463189325177LL;
unsigned long long int var_16 = 1798719059241973111ULL;
int var_17 = 1040226702;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)24470;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
