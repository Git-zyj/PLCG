#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3506108349047527507ULL;
unsigned char var_7 = (unsigned char)64;
unsigned short var_9 = (unsigned short)25234;
unsigned short var_13 = (unsigned short)45498;
int var_17 = 123474146;
int zero = 0;
short var_20 = (short)-25190;
_Bool var_21 = (_Bool)0;
long long int var_22 = 8943825296631868144LL;
long long int var_23 = -2596098563386323035LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
