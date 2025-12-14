#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)92;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_5 = (short)17682;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int var_14 = -1157012923;
int zero = 0;
short var_15 = (short)20002;
unsigned short var_16 = (unsigned short)34946;
_Bool var_17 = (_Bool)1;
short var_18 = (short)25336;
unsigned short var_19 = (unsigned short)17590;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
