#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1339480128122234148LL;
unsigned int var_4 = 2875085909U;
int var_5 = -927245087;
short var_8 = (short)-32548;
int var_10 = -1717230590;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-39;
int var_14 = 1007510662;
int var_15 = 1393008065;
int var_16 = 801733677;
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
