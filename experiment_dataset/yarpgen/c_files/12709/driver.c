#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2020355529;
short var_1 = (short)16890;
signed char var_3 = (signed char)105;
short var_6 = (short)22481;
unsigned long long int var_10 = 1247962756635911566ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 14772122025946941824ULL;
unsigned int var_15 = 310063303U;
unsigned int var_16 = 416091814U;
int var_17 = -1644376602;
unsigned int var_18 = 1275540419U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
