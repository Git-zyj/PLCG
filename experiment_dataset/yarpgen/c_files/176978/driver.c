#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29532;
unsigned int var_3 = 1701210114U;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 3520138174U;
long long int var_10 = -8652348992173677771LL;
unsigned int var_18 = 478986668U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2832302141U;
short var_21 = (short)-10568;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
