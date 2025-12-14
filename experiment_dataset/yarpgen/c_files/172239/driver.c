#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -887566234503642834LL;
unsigned short var_5 = (unsigned short)58106;
unsigned int var_8 = 3754492480U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 7438588743801996905ULL;
unsigned short var_13 = (unsigned short)52532;
int zero = 0;
signed char var_14 = (signed char)61;
short var_15 = (short)-22667;
unsigned char var_16 = (unsigned char)204;
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
