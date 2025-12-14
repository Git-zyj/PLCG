#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)30788;
unsigned int var_7 = 544875691U;
unsigned long long int var_8 = 11674770463616070349ULL;
unsigned char var_9 = (unsigned char)56;
unsigned long long int var_11 = 13770624854701369910ULL;
int zero = 0;
short var_12 = (short)22882;
unsigned short var_13 = (unsigned short)15607;
unsigned int var_14 = 960439622U;
void init() {
}

void checksum() {
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
