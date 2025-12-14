#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)213;
unsigned char var_4 = (unsigned char)139;
unsigned char var_6 = (unsigned char)170;
unsigned char var_7 = (unsigned char)141;
long long int var_8 = 841373709566964225LL;
signed char var_9 = (signed char)5;
long long int var_12 = -1568319955224431520LL;
long long int var_13 = 8527754172351868960LL;
unsigned int var_14 = 969098598U;
int zero = 0;
long long int var_19 = 401149951032400300LL;
long long int var_20 = 3483592498073699952LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
