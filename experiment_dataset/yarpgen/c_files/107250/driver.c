#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = 3519675720945788151LL;
long long int var_7 = -45221734031971716LL;
int var_8 = -188806889;
unsigned int var_9 = 3185731417U;
_Bool var_15 = (_Bool)0;
int var_16 = 1350986997;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2332633834U;
long long int var_19 = 8945126751780320155LL;
short var_20 = (short)6080;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
