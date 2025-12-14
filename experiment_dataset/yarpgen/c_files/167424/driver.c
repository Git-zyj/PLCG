#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48822;
unsigned long long int var_2 = 10215752495870675497ULL;
long long int var_3 = -1447126264518370426LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-8612;
unsigned int var_8 = 3002205575U;
short var_11 = (short)21967;
int zero = 0;
unsigned long long int var_12 = 4495243979633593596ULL;
unsigned long long int var_13 = 17946072389654461302ULL;
short var_14 = (short)27271;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
