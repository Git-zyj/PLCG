#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = -6771828202632422688LL;
signed char var_4 = (signed char)-92;
long long int var_5 = -2369055167718007702LL;
unsigned short var_9 = (unsigned short)54581;
short var_10 = (short)18342;
unsigned char var_12 = (unsigned char)209;
unsigned short var_15 = (unsigned short)51493;
long long int var_16 = 6712924806355781833LL;
unsigned short var_17 = (unsigned short)9750;
signed char var_19 = (signed char)24;
int zero = 0;
long long int var_20 = 5176562258589521695LL;
unsigned char var_21 = (unsigned char)13;
long long int var_22 = -4525931564806713043LL;
short var_23 = (short)-14333;
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
