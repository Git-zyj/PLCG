#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21034;
signed char var_2 = (signed char)37;
unsigned char var_3 = (unsigned char)165;
short var_5 = (short)28123;
unsigned short var_6 = (unsigned short)13948;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)51013;
short var_10 = (short)-29872;
short var_12 = (short)-31433;
int zero = 0;
unsigned char var_13 = (unsigned char)139;
unsigned short var_14 = (unsigned short)19683;
long long int var_15 = -5385806948488064014LL;
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
