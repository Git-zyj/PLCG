#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31943;
int var_1 = 1528292933;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 7207608291785515003ULL;
unsigned short var_5 = (unsigned short)35852;
unsigned short var_6 = (unsigned short)58653;
unsigned char var_10 = (unsigned char)127;
int var_12 = -1351117328;
int zero = 0;
unsigned long long int var_13 = 14834527197082244325ULL;
unsigned long long int var_14 = 11571402695775842600ULL;
unsigned char var_15 = (unsigned char)95;
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
