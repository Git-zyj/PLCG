#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5569430947308363862LL;
signed char var_6 = (signed char)-100;
unsigned short var_9 = (unsigned short)34574;
long long int var_10 = 1381176888013529124LL;
short var_13 = (short)23253;
int zero = 0;
long long int var_15 = 2407184020912345122LL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)27635;
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
