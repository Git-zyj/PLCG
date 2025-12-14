#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -873391193;
short var_2 = (short)-24607;
signed char var_3 = (signed char)-7;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)187;
unsigned long long int var_7 = 13444504943019992931ULL;
long long int var_10 = 5919602553237737234LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_13 = (short)619;
unsigned long long int var_14 = 3987584792980739673ULL;
short var_15 = (short)24448;
void init() {
}

void checksum() {
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
