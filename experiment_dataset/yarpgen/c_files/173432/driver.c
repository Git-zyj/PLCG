#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5804664057409510215ULL;
long long int var_8 = 8175193905666310328LL;
long long int var_10 = -2449545141552110514LL;
int zero = 0;
unsigned short var_12 = (unsigned short)54666;
long long int var_13 = -2414639250705510264LL;
short var_14 = (short)-30641;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
