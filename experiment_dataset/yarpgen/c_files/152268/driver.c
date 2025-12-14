#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned long long int var_2 = 8469074801726277893ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)15047;
int var_6 = 1549233969;
short var_7 = (short)20316;
short var_8 = (short)3319;
long long int var_9 = -3309057111160520371LL;
int var_10 = 875334990;
int zero = 0;
unsigned short var_12 = (unsigned short)34471;
int var_13 = 2001332404;
void init() {
}

void checksum() {
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
