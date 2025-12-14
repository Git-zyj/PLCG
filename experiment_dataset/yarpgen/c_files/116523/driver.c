#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -8461347705093586619LL;
int var_3 = 526460783;
unsigned short var_4 = (unsigned short)7837;
long long int var_5 = -4244195788587545721LL;
unsigned long long int var_12 = 15557660528929742698ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)9871;
unsigned char var_16 = (unsigned char)249;
void init() {
}

void checksum() {
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
