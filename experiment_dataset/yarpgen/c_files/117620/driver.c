#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21421;
unsigned long long int var_2 = 6344949620959538888ULL;
unsigned int var_5 = 1242778139U;
unsigned long long int var_9 = 8954244478401736541ULL;
unsigned long long int var_13 = 18326332394454213569ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -369283986;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
