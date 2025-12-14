#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)14;
long long int var_3 = -1530616326275221167LL;
short var_4 = (short)-14367;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -4553360656145229070LL;
int zero = 0;
short var_12 = (short)20230;
long long int var_13 = 5823862132434169368LL;
unsigned char var_14 = (unsigned char)235;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
