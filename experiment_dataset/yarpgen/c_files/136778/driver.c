#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
int var_1 = -884620172;
unsigned short var_5 = (unsigned short)36682;
short var_6 = (short)5;
unsigned long long int var_8 = 7309696963106606202ULL;
int var_12 = 710539395;
int zero = 0;
long long int var_14 = -2092615620572006628LL;
unsigned char var_15 = (unsigned char)111;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1392186411U;
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
