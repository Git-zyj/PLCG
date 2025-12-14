#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14058;
int var_1 = -1807086207;
short var_2 = (short)-22422;
short var_3 = (short)-30649;
unsigned int var_4 = 3112559932U;
signed char var_5 = (signed char)79;
unsigned short var_7 = (unsigned short)50219;
short var_8 = (short)17201;
short var_9 = (short)-19442;
int zero = 0;
long long int var_11 = 8639461113456661438LL;
unsigned long long int var_12 = 16421587728891093760ULL;
unsigned int var_13 = 3657727531U;
signed char var_14 = (signed char)28;
_Bool var_15 = (_Bool)1;
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
