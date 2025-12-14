#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10026;
unsigned short var_3 = (unsigned short)9556;
short var_6 = (short)25362;
signed char var_7 = (signed char)-5;
unsigned int var_8 = 1716926289U;
unsigned long long int var_11 = 2268123779966718120ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)226;
unsigned char var_14 = (unsigned char)154;
unsigned int var_15 = 3989593395U;
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
