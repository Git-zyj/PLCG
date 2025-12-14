#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5281614132407419851LL;
long long int var_2 = -5745577343252106413LL;
short var_3 = (short)10264;
long long int var_4 = -8085629868000727984LL;
long long int var_7 = 1645743383483604257LL;
int zero = 0;
long long int var_10 = -1958712412801075457LL;
short var_11 = (short)2004;
long long int var_12 = 3018794606918166409LL;
long long int var_13 = 7856745197999434718LL;
short var_14 = (short)-24625;
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
