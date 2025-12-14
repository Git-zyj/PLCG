#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20069;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)13414;
short var_3 = (short)-14113;
long long int var_7 = 6189356997349544840LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_16 = -6110836006476432084LL;
unsigned long long int var_17 = 16617193402863226396ULL;
long long int var_18 = 442642907760509316LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
