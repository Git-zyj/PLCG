#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5588033691690747936LL;
unsigned short var_6 = (unsigned short)56121;
int var_10 = -1203607419;
unsigned long long int var_14 = 16330678958559061351ULL;
int var_16 = 1480820564;
unsigned int var_19 = 2971456464U;
int zero = 0;
short var_20 = (short)-18682;
unsigned int var_21 = 2542981235U;
long long int var_22 = -4099363255152385366LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
