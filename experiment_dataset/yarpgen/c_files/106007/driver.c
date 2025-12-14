#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
unsigned char var_3 = (unsigned char)209;
unsigned long long int var_4 = 665179803963715205ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)10509;
int zero = 0;
unsigned short var_16 = (unsigned short)63647;
short var_17 = (short)32359;
unsigned long long int var_18 = 14407920040529297795ULL;
void init() {
}

void checksum() {
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
