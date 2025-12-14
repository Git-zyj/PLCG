#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1052973177U;
short var_5 = (short)-12844;
long long int var_7 = -7584563567369914969LL;
_Bool var_13 = (_Bool)1;
unsigned int var_18 = 3181925200U;
int zero = 0;
unsigned int var_19 = 805599331U;
short var_20 = (short)17262;
unsigned short var_21 = (unsigned short)29948;
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
