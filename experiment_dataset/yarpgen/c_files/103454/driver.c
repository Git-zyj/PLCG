#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1562396967;
unsigned int var_5 = 3452733048U;
unsigned char var_8 = (unsigned char)170;
_Bool var_9 = (_Bool)1;
long long int var_11 = -6644406053484584125LL;
unsigned int var_12 = 1177948373U;
int zero = 0;
short var_17 = (short)31724;
_Bool var_18 = (_Bool)1;
int var_19 = -347951621;
unsigned char var_20 = (unsigned char)140;
short var_21 = (short)-4319;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
