#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)56;
unsigned char var_10 = (unsigned char)129;
long long int var_13 = 6609818730290560662LL;
int zero = 0;
long long int var_19 = -7295179689023331471LL;
long long int var_20 = -3514945551790517801LL;
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
