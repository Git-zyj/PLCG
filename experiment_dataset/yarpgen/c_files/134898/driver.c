#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-47;
unsigned long long int var_2 = 3449556683102098845ULL;
long long int var_4 = 8728839522825360306LL;
unsigned short var_5 = (unsigned short)31649;
unsigned char var_6 = (unsigned char)92;
unsigned short var_7 = (unsigned short)7302;
unsigned short var_8 = (unsigned short)37037;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 746654459;
short var_12 = (short)9094;
int var_13 = 1704373561;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
