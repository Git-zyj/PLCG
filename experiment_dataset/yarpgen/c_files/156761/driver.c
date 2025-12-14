#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
short var_1 = (short)12993;
short var_2 = (short)13812;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-113;
long long int var_9 = -8596237316362519928LL;
unsigned char var_10 = (unsigned char)220;
int zero = 0;
short var_13 = (short)-30926;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7172512448959369284ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
