#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 18363193413528857556ULL;
long long int var_4 = -2983576702517215197LL;
long long int var_6 = -3297101788017426812LL;
unsigned char var_7 = (unsigned char)210;
unsigned char var_13 = (unsigned char)143;
short var_14 = (short)-4234;
unsigned int var_15 = 860784616U;
int zero = 0;
short var_17 = (short)-14058;
unsigned char var_18 = (unsigned char)255;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
