#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
unsigned short var_1 = (unsigned short)812;
signed char var_2 = (signed char)98;
unsigned char var_4 = (unsigned char)21;
short var_5 = (short)-17830;
_Bool var_6 = (_Bool)1;
short var_9 = (short)10351;
int zero = 0;
unsigned short var_12 = (unsigned short)39733;
long long int var_13 = 3264937313379227789LL;
unsigned char var_14 = (unsigned char)183;
int var_15 = -1974639688;
unsigned long long int var_16 = 8335785957739561725ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
