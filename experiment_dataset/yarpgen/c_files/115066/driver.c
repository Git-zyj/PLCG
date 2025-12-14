#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4296000790943075381LL;
unsigned char var_4 = (unsigned char)0;
unsigned char var_5 = (unsigned char)98;
short var_6 = (short)-840;
long long int var_9 = -1600319510853287426LL;
unsigned short var_10 = (unsigned short)61669;
int var_13 = -1400714288;
int zero = 0;
signed char var_15 = (signed char)-44;
_Bool var_16 = (_Bool)0;
long long int var_17 = 3395136475183206275LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
