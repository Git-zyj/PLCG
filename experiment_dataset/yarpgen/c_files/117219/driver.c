#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8172;
unsigned long long int var_2 = 10784476011918247659ULL;
unsigned short var_3 = (unsigned short)150;
_Bool var_5 = (_Bool)1;
short var_7 = (short)20962;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-16192;
int zero = 0;
int var_14 = -1309564392;
unsigned int var_15 = 2064874414U;
unsigned short var_16 = (unsigned short)49848;
unsigned int var_17 = 4054839486U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
