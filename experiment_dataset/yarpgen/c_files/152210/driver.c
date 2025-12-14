#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3309818716864455225LL;
long long int var_1 = 8326495244766831107LL;
short var_3 = (short)-24737;
short var_4 = (short)-28623;
long long int var_6 = -2248407108798654811LL;
short var_8 = (short)-9890;
unsigned char var_10 = (unsigned char)240;
int zero = 0;
unsigned char var_15 = (unsigned char)176;
unsigned short var_16 = (unsigned short)52951;
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
