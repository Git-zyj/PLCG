#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1492503970056224936LL;
unsigned short var_1 = (unsigned short)43850;
unsigned int var_4 = 1053615521U;
unsigned char var_5 = (unsigned char)95;
int zero = 0;
long long int var_10 = -8527299849144422050LL;
unsigned int var_11 = 4133262953U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
