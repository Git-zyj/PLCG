#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1008817524;
unsigned short var_1 = (unsigned short)34375;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)14892;
long long int var_10 = 1262558405937915480LL;
short var_15 = (short)-3289;
long long int var_17 = -4067922679397368058LL;
long long int var_19 = 8940844173819449783LL;
int zero = 0;
signed char var_20 = (signed char)37;
unsigned int var_21 = 2620653388U;
unsigned short var_22 = (unsigned short)49269;
unsigned long long int var_23 = 2495603968979953715ULL;
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
