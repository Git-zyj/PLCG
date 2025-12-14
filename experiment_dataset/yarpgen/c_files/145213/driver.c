#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1725372987U;
signed char var_3 = (signed char)32;
unsigned long long int var_5 = 10540149719772936827ULL;
unsigned long long int var_6 = 15658761200996003576ULL;
unsigned char var_11 = (unsigned char)13;
_Bool var_12 = (_Bool)0;
short var_13 = (short)30831;
int zero = 0;
unsigned long long int var_14 = 7520405585954393316ULL;
long long int var_15 = -1743182589314555486LL;
unsigned int var_16 = 1561102735U;
unsigned char var_17 = (unsigned char)184;
signed char var_18 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
