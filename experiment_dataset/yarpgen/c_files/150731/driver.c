#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -791312774;
short var_9 = (short)-28864;
long long int var_12 = -386336428019532045LL;
int zero = 0;
long long int var_15 = -8218546290806058894LL;
long long int var_16 = 4300011739435164136LL;
short var_17 = (short)-11027;
unsigned long long int var_18 = 12289104098900637144ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
