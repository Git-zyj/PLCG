#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28485;
signed char var_5 = (signed char)2;
int var_7 = 1182771869;
unsigned short var_8 = (unsigned short)14383;
unsigned short var_10 = (unsigned short)58785;
int zero = 0;
unsigned char var_15 = (unsigned char)3;
signed char var_16 = (signed char)90;
long long int var_17 = -7913535316364977311LL;
long long int var_18 = -8808302193111926922LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
