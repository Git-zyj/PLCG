#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = -480446927;
unsigned char var_5 = (unsigned char)172;
unsigned long long int var_7 = 14118872368561225740ULL;
long long int var_8 = 5112915507750177937LL;
int zero = 0;
short var_17 = (short)28955;
unsigned long long int var_18 = 5866574221644341680ULL;
void init() {
}

void checksum() {
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
