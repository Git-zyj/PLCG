#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)2;
unsigned long long int var_2 = 12746476047748291264ULL;
unsigned long long int var_8 = 7882233845628767737ULL;
int var_9 = 1430755429;
unsigned short var_10 = (unsigned short)52709;
unsigned char var_12 = (unsigned char)181;
int zero = 0;
unsigned char var_15 = (unsigned char)135;
int var_16 = -2004282418;
void init() {
}

void checksum() {
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
