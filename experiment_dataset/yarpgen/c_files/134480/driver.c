#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2790046249948739191LL;
unsigned long long int var_1 = 4028086772973213081ULL;
long long int var_2 = 536564349224505484LL;
unsigned int var_4 = 3320816883U;
_Bool var_5 = (_Bool)0;
long long int var_6 = 3910784513512676935LL;
long long int var_8 = 4835112707350344768LL;
short var_9 = (short)17088;
unsigned short var_13 = (unsigned short)18914;
int var_14 = 1866076389;
short var_15 = (short)21296;
int zero = 0;
long long int var_16 = 4292908311902111395LL;
short var_17 = (short)-18257;
unsigned char var_18 = (unsigned char)104;
short var_19 = (short)-17346;
unsigned int var_20 = 1752432364U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
