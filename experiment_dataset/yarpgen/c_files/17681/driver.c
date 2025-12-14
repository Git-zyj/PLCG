#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-80;
long long int var_4 = -5523235932107467220LL;
long long int var_6 = -3386255083944953221LL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3792555021U;
int var_11 = -728319972;
int zero = 0;
int var_12 = 2006383636;
unsigned int var_13 = 3216971091U;
int var_14 = 1729048312;
signed char var_15 = (signed char)118;
int var_16 = 180573650;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
