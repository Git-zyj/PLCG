#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1874239453;
unsigned long long int var_8 = 1481890860032457675ULL;
short var_11 = (short)-22213;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-72;
unsigned char var_16 = (unsigned char)189;
signed char var_17 = (signed char)119;
long long int var_18 = 1046291752183025258LL;
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
