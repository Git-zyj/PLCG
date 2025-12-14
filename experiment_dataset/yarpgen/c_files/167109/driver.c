#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)4358;
unsigned short var_4 = (unsigned short)16842;
long long int var_6 = 9119077579381314824LL;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-28113;
int zero = 0;
short var_19 = (short)-13770;
unsigned char var_20 = (unsigned char)84;
short var_21 = (short)-16335;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
