#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)179;
unsigned char var_8 = (unsigned char)108;
long long int var_9 = -5097434785908628743LL;
int var_12 = -911030706;
_Bool var_13 = (_Bool)1;
int var_14 = 1458216364;
int zero = 0;
int var_19 = -1267411354;
unsigned short var_20 = (unsigned short)36769;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)49166;
int var_23 = 1595823372;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
