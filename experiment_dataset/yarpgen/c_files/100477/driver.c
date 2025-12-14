#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17698014259001151632ULL;
unsigned char var_3 = (unsigned char)47;
unsigned short var_7 = (unsigned short)7923;
unsigned long long int var_10 = 1644414242520056178ULL;
short var_12 = (short)-26655;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)35757;
unsigned char var_16 = (unsigned char)198;
_Bool var_17 = (_Bool)1;
int var_18 = 400997865;
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
