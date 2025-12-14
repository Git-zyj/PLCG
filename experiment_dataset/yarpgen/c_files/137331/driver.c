#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35214;
_Bool var_2 = (_Bool)0;
long long int var_12 = -3891025439907329328LL;
long long int var_13 = -2103154200205539353LL;
int zero = 0;
unsigned char var_14 = (unsigned char)60;
unsigned long long int var_15 = 14534098688910295525ULL;
unsigned short var_16 = (unsigned short)56855;
long long int var_17 = 314034127659021736LL;
long long int var_18 = 7484264034756427213LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
