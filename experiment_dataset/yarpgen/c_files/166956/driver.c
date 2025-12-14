#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)25711;
unsigned long long int var_5 = 14918745305763113636ULL;
long long int var_6 = 6847395010872415624LL;
unsigned short var_7 = (unsigned short)61468;
long long int var_9 = 9209641354354939090LL;
int var_12 = 1094374135;
unsigned char var_13 = (unsigned char)197;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 7239989936208648523LL;
unsigned long long int var_16 = 88835096603851041ULL;
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
