#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_6 = (short)19478;
unsigned short var_7 = (unsigned short)36618;
unsigned short var_8 = (unsigned short)11109;
int var_9 = 252301833;
int var_11 = -1605276576;
int zero = 0;
int var_12 = -1552520159;
long long int var_13 = -3174647460912664550LL;
unsigned short var_14 = (unsigned short)25602;
int var_15 = 1140858317;
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
