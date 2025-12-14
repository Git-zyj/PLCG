#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1526998124889090199ULL;
long long int var_4 = -4544860788461338259LL;
unsigned short var_8 = (unsigned short)40501;
unsigned int var_11 = 3725390646U;
short var_12 = (short)7051;
long long int var_13 = -5124888837615192744LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)185;
long long int var_18 = 8781633092594967775LL;
short var_19 = (short)6595;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
