#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1746042139U;
unsigned int var_1 = 1556250318U;
int var_2 = 820054082;
unsigned int var_3 = 1659759821U;
unsigned long long int var_4 = 612297608726022456ULL;
int var_6 = 1696027530;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-25871;
int zero = 0;
unsigned int var_11 = 3721227921U;
_Bool var_12 = (_Bool)0;
long long int var_13 = 7201265861666517869LL;
void init() {
}

void checksum() {
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
