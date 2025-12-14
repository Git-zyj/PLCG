#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1613092711U;
long long int var_2 = 6702863669197504512LL;
_Bool var_3 = (_Bool)0;
int var_5 = -1751190651;
long long int var_6 = -7795510572921424394LL;
int var_7 = 244425970;
_Bool var_8 = (_Bool)0;
short var_10 = (short)27468;
int zero = 0;
long long int var_11 = -8489677275952839097LL;
signed char var_12 = (signed char)-98;
unsigned short var_13 = (unsigned short)31167;
unsigned int var_14 = 3486298931U;
unsigned long long int var_15 = 9478759251514535597ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
