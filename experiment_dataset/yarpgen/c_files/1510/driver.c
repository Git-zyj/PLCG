#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3163016996486005087LL;
long long int var_2 = 8234874104583333451LL;
short var_5 = (short)-9071;
long long int var_6 = 7854398731497275269LL;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
short var_15 = (short)10834;
int zero = 0;
long long int var_16 = 7296791651625034217LL;
int var_17 = 1713259798;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
