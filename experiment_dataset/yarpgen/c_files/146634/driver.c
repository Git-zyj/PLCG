#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1830650855;
unsigned int var_2 = 1511353956U;
short var_5 = (short)-23077;
long long int var_8 = -8481037203001648535LL;
_Bool var_9 = (_Bool)0;
int var_12 = 976704160;
int zero = 0;
int var_17 = 951629506;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
