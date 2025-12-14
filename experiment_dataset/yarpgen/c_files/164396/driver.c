#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned long long int var_14 = 7296332778298646297ULL;
long long int var_15 = 7982185567641189632LL;
int zero = 0;
short var_17 = (short)-18663;
unsigned short var_18 = (unsigned short)60696;
unsigned short var_19 = (unsigned short)32192;
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
