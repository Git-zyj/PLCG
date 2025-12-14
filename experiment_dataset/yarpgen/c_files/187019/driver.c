#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10628423831729663297ULL;
unsigned long long int var_2 = 4114988814285893970ULL;
long long int var_4 = -5164764576452897559LL;
unsigned short var_7 = (unsigned short)29525;
int zero = 0;
short var_10 = (short)-14324;
unsigned long long int var_11 = 6458784838872783841ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
