#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)53878;
long long int var_10 = 6308039670794814856LL;
unsigned int var_12 = 891663439U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)43100;
short var_15 = (short)7461;
int zero = 0;
long long int var_16 = -8913955604706826414LL;
signed char var_17 = (signed char)-112;
void init() {
}

void checksum() {
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
