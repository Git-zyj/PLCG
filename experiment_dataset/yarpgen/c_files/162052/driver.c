#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -804657512926684880LL;
long long int var_2 = -8063198224946673903LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_10 = 13417694989463335402ULL;
unsigned int var_11 = 4205599810U;
unsigned int var_12 = 3428649064U;
int zero = 0;
unsigned long long int var_13 = 11913374555964638014ULL;
unsigned long long int var_14 = 7099590507000256150ULL;
signed char var_15 = (signed char)-32;
void init() {
}

void checksum() {
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
