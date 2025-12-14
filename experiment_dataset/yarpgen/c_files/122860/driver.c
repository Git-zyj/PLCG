#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
unsigned long long int var_4 = 13034748399464680324ULL;
short var_8 = (short)20912;
unsigned long long int var_14 = 8934036895452247767ULL;
unsigned long long int var_15 = 4945117195730295250ULL;
int var_16 = -1087375778;
int zero = 0;
unsigned int var_17 = 1097884304U;
short var_18 = (short)-23427;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
short var_22 = (short)32345;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
