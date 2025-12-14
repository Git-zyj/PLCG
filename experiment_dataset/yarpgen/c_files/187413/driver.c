#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 994017329U;
_Bool var_1 = (_Bool)1;
int var_2 = 184337050;
unsigned int var_3 = 2092225625U;
int var_7 = -261840554;
unsigned int var_8 = 192373747U;
unsigned int var_9 = 1275808943U;
long long int var_11 = -60728420185939345LL;
int zero = 0;
unsigned short var_13 = (unsigned short)64332;
short var_14 = (short)-13356;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
