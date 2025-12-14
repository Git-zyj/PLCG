#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5568507896381140580ULL;
short var_1 = (short)29419;
int var_6 = -824543925;
short var_7 = (short)-18690;
int var_8 = -234287368;
int var_11 = -1244240907;
long long int var_12 = -4388199036542486752LL;
int var_13 = -442149125;
int zero = 0;
short var_15 = (short)-20884;
long long int var_16 = -1810708709074581914LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
