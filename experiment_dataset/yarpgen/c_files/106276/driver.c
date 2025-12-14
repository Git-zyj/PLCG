#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_5 = (unsigned short)56532;
unsigned char var_6 = (unsigned char)223;
unsigned long long int var_8 = 3367672363037941271ULL;
int var_9 = 639332092;
unsigned long long int var_11 = 14089906932082925462ULL;
unsigned int var_12 = 2843225572U;
int zero = 0;
long long int var_13 = -1556882215204260808LL;
int var_14 = 682112588;
short var_15 = (short)27892;
unsigned short var_16 = (unsigned short)30022;
unsigned long long int var_17 = 16104906375257557393ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
