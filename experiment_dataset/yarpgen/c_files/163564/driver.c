#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)129;
unsigned int var_4 = 992078550U;
unsigned int var_7 = 3382584092U;
unsigned int var_9 = 4125325053U;
unsigned int var_10 = 317471356U;
int zero = 0;
unsigned int var_11 = 4203723675U;
unsigned long long int var_12 = 9441093718203259986ULL;
unsigned long long int var_13 = 9539142624616876463ULL;
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
