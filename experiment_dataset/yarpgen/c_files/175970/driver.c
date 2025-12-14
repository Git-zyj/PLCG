#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -758486302337378578LL;
int var_2 = 1488267743;
long long int var_3 = 1485317214816282081LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 2712325763079585036LL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)239;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 594782475U;
unsigned int var_11 = 1130670391U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)59243;
unsigned short var_14 = (unsigned short)36557;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
