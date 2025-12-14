#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)19181;
unsigned char var_2 = (unsigned char)87;
unsigned short var_6 = (unsigned short)52798;
long long int var_10 = -6168870932285359417LL;
int var_14 = 1444164803;
short var_17 = (short)-15732;
long long int var_18 = 685705877155522826LL;
int zero = 0;
unsigned long long int var_20 = 9006950036469308106ULL;
unsigned long long int var_21 = 2381389234010614299ULL;
unsigned int var_22 = 144603758U;
signed char var_23 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
