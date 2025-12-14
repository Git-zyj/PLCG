#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 726490359;
_Bool var_3 = (_Bool)0;
long long int var_5 = -1854209839930348603LL;
unsigned long long int var_8 = 2355924092149326003ULL;
short var_9 = (short)21679;
unsigned char var_10 = (unsigned char)30;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)3240;
long long int var_13 = 6642936789520733505LL;
void init() {
}

void checksum() {
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
