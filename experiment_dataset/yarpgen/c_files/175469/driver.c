#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1381389535320987789LL;
unsigned short var_5 = (unsigned short)13026;
unsigned char var_11 = (unsigned char)37;
long long int var_12 = -5265098258410329380LL;
int var_16 = 888423453;
int zero = 0;
int var_17 = 1750678831;
unsigned int var_18 = 1232718983U;
int var_19 = -1894298108;
unsigned char var_20 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
