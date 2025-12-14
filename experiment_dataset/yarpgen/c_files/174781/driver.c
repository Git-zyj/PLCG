#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8981601279344619279ULL;
int var_2 = 1031200322;
long long int var_4 = 4893059319811599909LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_12 = 329864718;
int var_13 = 1348768661;
int zero = 0;
long long int var_16 = -5588897222125629490LL;
short var_17 = (short)6762;
signed char var_18 = (signed char)-21;
int var_19 = -18607958;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
