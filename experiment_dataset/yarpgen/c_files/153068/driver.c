#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6112684850143625749ULL;
unsigned int var_3 = 3259041509U;
unsigned char var_7 = (unsigned char)226;
unsigned int var_9 = 144903277U;
signed char var_11 = (signed char)4;
unsigned int var_12 = 901406073U;
int zero = 0;
unsigned long long int var_13 = 17732574609631690248ULL;
int var_14 = 1116449659;
unsigned long long int var_15 = 17658211196503671517ULL;
long long int var_16 = -2709741920094332135LL;
void init() {
}

void checksum() {
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
