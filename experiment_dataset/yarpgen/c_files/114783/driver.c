#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14350;
signed char var_6 = (signed char)108;
signed char var_8 = (signed char)-104;
unsigned long long int var_10 = 3784091494252768423ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-90;
unsigned int var_14 = 2495839850U;
int var_15 = 640364468;
short var_16 = (short)27133;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
