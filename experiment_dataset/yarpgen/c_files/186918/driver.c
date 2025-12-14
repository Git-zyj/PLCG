#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4936644920360160146ULL;
short var_5 = (short)15002;
short var_7 = (short)-22526;
short var_9 = (short)11797;
long long int var_11 = -1830965713726354152LL;
unsigned int var_14 = 1354256980U;
int zero = 0;
signed char var_17 = (signed char)100;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 10968705483293800634ULL;
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
