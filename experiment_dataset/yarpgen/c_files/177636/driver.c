#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1775080709U;
long long int var_1 = -8045172053347024226LL;
_Bool var_2 = (_Bool)1;
int var_6 = 232839174;
unsigned int var_7 = 1629941334U;
long long int var_8 = 2051606558030506619LL;
unsigned char var_9 = (unsigned char)118;
short var_10 = (short)14323;
unsigned long long int var_11 = 4228978647749878567ULL;
short var_12 = (short)11854;
unsigned short var_14 = (unsigned short)17673;
unsigned short var_16 = (unsigned short)25038;
int zero = 0;
unsigned int var_18 = 1672099083U;
unsigned int var_19 = 4221545177U;
long long int var_20 = -2688383977910208669LL;
unsigned int var_21 = 1518871769U;
unsigned char var_22 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
