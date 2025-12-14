#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2299;
long long int var_4 = 8066092516539238300LL;
unsigned long long int var_10 = 2533201467813747423ULL;
short var_11 = (short)-3491;
long long int var_12 = 7058115438909073031LL;
unsigned long long int var_13 = 16667044542871698126ULL;
short var_14 = (short)-4849;
short var_15 = (short)-24817;
unsigned int var_16 = 836855944U;
unsigned int var_19 = 4070149460U;
int zero = 0;
long long int var_20 = 5763780228370719756LL;
unsigned int var_21 = 1146449013U;
int var_22 = 957714001;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
