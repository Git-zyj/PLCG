#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30838;
unsigned short var_3 = (unsigned short)59476;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 12011660088702176819ULL;
signed char var_11 = (signed char)-105;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-25240;
short var_16 = (short)3026;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
