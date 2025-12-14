#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12619618001511880870ULL;
long long int var_2 = -3924649957192473340LL;
unsigned short var_6 = (unsigned short)42541;
short var_7 = (short)4265;
long long int var_8 = 1239618664563466137LL;
short var_9 = (short)7333;
int zero = 0;
unsigned short var_10 = (unsigned short)28874;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-10290;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
