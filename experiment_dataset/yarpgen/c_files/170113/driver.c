#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6352;
unsigned int var_2 = 2163053715U;
short var_3 = (short)-25032;
unsigned short var_4 = (unsigned short)30990;
unsigned long long int var_5 = 6245151006097834415ULL;
short var_6 = (short)20057;
unsigned int var_7 = 2180792165U;
long long int var_8 = -8199471883379365042LL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-29259;
long long int var_14 = 717861910947148146LL;
short var_16 = (short)-22506;
unsigned int var_18 = 1586416774U;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 7893758127921507545LL;
short var_21 = (short)-25682;
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
