#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23139;
_Bool var_1 = (_Bool)1;
short var_2 = (short)1651;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1056774250U;
_Bool var_6 = (_Bool)1;
long long int var_7 = 9029437748466626221LL;
short var_8 = (short)-29981;
int var_9 = 660917593;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)88;
int var_12 = 307932701;
unsigned char var_13 = (unsigned char)167;
short var_14 = (short)-28695;
unsigned short var_15 = (unsigned short)59736;
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
