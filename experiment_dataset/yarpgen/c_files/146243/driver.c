#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59921;
unsigned char var_2 = (unsigned char)160;
long long int var_3 = -8947664792315617693LL;
short var_7 = (short)-7477;
unsigned long long int var_11 = 13221632272836545110ULL;
unsigned long long int var_13 = 3679924239877103652ULL;
signed char var_14 = (signed char)7;
long long int var_18 = 284885179780970250LL;
int zero = 0;
int var_20 = -115068484;
unsigned long long int var_21 = 15149749551536753488ULL;
int var_22 = 1237125797;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
