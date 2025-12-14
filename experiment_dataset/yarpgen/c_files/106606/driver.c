#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -445735607;
short var_1 = (short)-30198;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)4969;
unsigned int var_6 = 4130778704U;
unsigned long long int var_9 = 9037758510119418530ULL;
long long int var_10 = -3136765206579316553LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1648687515;
void init() {
}

void checksum() {
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
