#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6532296231008811164LL;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-12715;
unsigned long long int var_3 = 16979241751549183844ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3038867608U;
unsigned int var_9 = 2702795829U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 278319709U;
unsigned int var_12 = 1295192463U;
unsigned int var_13 = 239883699U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
