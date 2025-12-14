#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18624;
short var_2 = (short)-528;
unsigned short var_3 = (unsigned short)14687;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_9 = (short)13580;
unsigned short var_10 = (unsigned short)15555;
int zero = 0;
unsigned int var_11 = 2513810382U;
long long int var_12 = -836653698858507358LL;
short var_13 = (short)-2447;
unsigned short var_14 = (unsigned short)57928;
signed char var_15 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
