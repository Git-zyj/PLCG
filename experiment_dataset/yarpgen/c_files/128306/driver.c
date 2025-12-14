#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -727973818;
_Bool var_4 = (_Bool)1;
int var_7 = -888434510;
int var_10 = 90521299;
unsigned int var_14 = 3140106797U;
int zero = 0;
int var_17 = -694938652;
unsigned int var_18 = 3020388253U;
int var_19 = 999201420;
void init() {
}

void checksum() {
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
