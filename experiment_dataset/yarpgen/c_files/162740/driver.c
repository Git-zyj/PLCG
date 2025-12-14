#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4856037580205540485LL;
int var_1 = 431830225;
long long int var_3 = 3548382879347137704LL;
int var_4 = 1761211526;
short var_5 = (short)2517;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = 233939666;
long long int var_10 = -6781217427263513852LL;
short var_12 = (short)-14353;
int var_13 = -569799590;
int zero = 0;
short var_14 = (short)-20460;
short var_15 = (short)-7872;
int var_16 = 15150177;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
