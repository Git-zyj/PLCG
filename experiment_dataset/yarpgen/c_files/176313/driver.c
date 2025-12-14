#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6001882144827507744LL;
signed char var_9 = (signed char)-64;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)248;
unsigned char var_16 = (unsigned char)195;
int zero = 0;
unsigned long long int var_20 = 1654542157544336722ULL;
int var_21 = 773165369;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-32160;
unsigned short var_24 = (unsigned short)47003;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
